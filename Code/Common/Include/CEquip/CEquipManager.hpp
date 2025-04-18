#pragma once


class CExternalEquip;
class CEquip;
class CEquipManager;
class CEquipTraverser
{
    public:
        COMMON_DEC CEquipTraverser(int);
        COMMON_DEC CEquipTraverser(int, bool);
        COMMON_DEC CEquipTraverser();
        COMMON_DEC CEquipTraverser& operator=(const CEquipTraverser&);
        COMMON_DEC void Restart();

        CEquipTraverser(CEquipManager* manager, EquipmentClass equipClass = EquipmentClass::All, bool skipDestroyed = false)
            : CEquipTraverser(static_cast<int>(equipClass), skipDestroyed)
        {
            equipManager = manager;
        }

        CEquipTraverser& operator++();

        CEquip* operator->() const { return currentEquip; }

        enum class IteratorState
        {
            End1,
            Iterating1,
            End2,
            Iterating2,
        };

        friend bool operator==(const CEquipTraverser& a, const CEquipTraverser& b)
        {
            return a.iteratorState == b.iteratorState && a.equipManager == b.equipManager;
        }

        friend bool operator!=(const CEquipTraverser& a, const CEquipTraverser& b)
        {
            return a.iteratorState != b.iteratorState || a.equipManager != b.equipManager;
        }

        EquipmentClass equipClass;
        bool skipDestroyed;
        IteratorState iteratorState;
        uint unk3;
        // Fields below added by us
        CEquip* currentEquip = nullptr;
        CEquipManager* equipManager = nullptr;
};

class CEquipManager
{
        COMMON_DEC int CleanUp(st6::list<CEquip*, st6::allocator<CEquip*>>&);
        COMMON_DEC static void Clear(st6::list<CEquip*, st6::allocator<CEquip*>>&);

    public:
        COMMON_DEC CEquipManager(const CEquipManager&);
        COMMON_DEC CEquipManager();
        COMMON_DEC ~CEquipManager();
        COMMON_DEC CEquipManager& operator=(const CEquipManager&);
        COMMON_DEC bool AddNewEquipment(CEquip*);
        COMMON_DEC int CleanUp();
        COMMON_DEC void Clear();
        COMMON_DEC CExternalEquip* FindByHardpoint(const CacheString&);
        COMMON_DEC const CExternalEquip* FindByHardpoint(const CacheString&) const;
        COMMON_DEC CEquip* FindByID(unsigned short);
        COMMON_DEC const CEquip* FindByID(unsigned short) const;
        COMMON_DEC CEquip* FindFirst(unsigned int);
        COMMON_DEC const CEquip* FindFirst(unsigned int) const;
        COMMON_DEC bool HasDecayingCargo() const;
        COMMON_DEC bool Init(CEqObj*);
        COMMON_DEC unsigned short InstToSubObjID(long) const;
        COMMON_DEC CEquip* ReverseTraverse(CEquipTraverser&);
        COMMON_DEC const CEquip* ReverseTraverse(CEquipTraverser&) const;
        COMMON_DEC int Size() const;
        COMMON_DEC CEquip* Traverse(CEquipTraverser&);
        COMMON_DEC const CEquip* Traverse(CEquipTraverser&) const;
        COMMON_DEC bool VerifyListSync(const class EquipDescList&) const;

        CEquipTraverser StartTraverse(EquipmentClass equipmentClass = EquipmentClass::All, bool skipDestroyed = false)
        {
            return CEquipTraverser(this, equipmentClass, skipDestroyed);
        }

        CEquipTraverser begin()
        {
            auto traverser = StartTraverse();
            traverser.operator++();
            return traverser;
        }

        CEquipTraverser end() { return { this, EquipmentClass::All, false }; }

        /* 0 */ uint iDunno0;
        /* 1 */ bool bDunno4;
        /* 2 */ uint unkPtr1;
        /* 3 */ int size1;
        /* 4 */ bool bDunno10;
        /* 5 */ uint unkPtr2;
        /* 6 */ int size2;
        /* 7 */ uint decayingCargo;
};

inline CEquipTraverser& CEquipTraverser::operator++()
{
    currentEquip = equipManager->Traverse(*this);
    return *this;
}