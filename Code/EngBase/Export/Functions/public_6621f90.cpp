#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_661ec90);
CLANG_FORWARD_PROC_SYMBOL(public_6623200);
CLANG_FORWARD_PROC_SYMBOL(public_6623ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6624ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6625220);
CLANG_FORWARD_PROC_SYMBOL(public_6625500);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_6621fac _public_6621fac
#define public_6621fb9 _public_6621fb9
#define public_6621fc9 _public_6621fc9
#define public_6622008 _public_6622008
#define public_662204d _public_662204d
#define public_6622074 _public_6622074
#define public_66220d7 _public_66220d7
#define public_6622125 _public_6622125

PROC_DECLARE(0x6621f90, internal_6621f90, public_6621f90);
extern "C" NAKED register_t __cdecl internal_6621f90()
{
    __asm
    {
        mov eax, 0x201C
        call public_6628230
        push ebp
        mov ebp, dword ptr ss : [esp+0x2028]
        cmp ebp, 0xFFFFFFFF
        push edi
        je public_6621fac
        test ebp, ebp
        jne public_6621fb9
        public_6621fac : nop
        pop edi
        xor eax, eax
        pop ebp
        add esp, 0x201C
        ret 0x10
        public_6621fb9 : nop
        mov edi, dword ptr ss : [esp+0x2030]
        cmp edi, 0xFFFFFFFF
        je public_6621fc9
        test edi, edi
        jne public_6622008
        public_6621fc9 : nop
        push edi
        push ebp
        lea eax, ss:[esp+0x2C]
/*FIXUP push offset public_662a920 @0x6621fcf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a920
        push eax
        call public_6611d80
        push eax
        push 0x741
        mov ecx, 0x100002
/*FIXUP push offset public_662a5c8 @0x6621fe5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x6621fea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        mov ecx, dword ptr ds : [public_6629004]
        call dword ptr ds : [ecx]
        add esp, 0x24
        xor eax, eax
        pop edi
        pop ebp
        add esp, 0x201C
        ret 0x10
        public_6622008 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_662204d
        push edi
        push ebp
        lea edx, ss:[esp+0x2C]
/*FIXUP push offset public_662a8d0 @0x6622015*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a8d0
        push edx
        call public_6611d80
        push eax
        mov eax, dword ptr ds : [public_6629004]
        push 0x746
        mov ecx, 0x100002
/*FIXUP push offset public_662a5c8 @0x6622030*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x6622035*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x24
        xor eax, eax
        pop edi
        pop ebp
        add esp, 0x201C
        ret 0x10
        public_662204d : nop
        mov eax, dword ptr ds : [edi+0x24]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2030]
        test eax, eax
        jle public_66220d7
        mov al, byte ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+0x10], edi
        test al, al
        je public_6622074
        mov ecx, dword ptr ds : [esi+0x28]
        cmp dword ptr ds : [ecx+0xC], edi
        jne public_6622074
        mov byte ptr ds : [esi+0x2C], 0
        public_6622074 : nop
        lea edx, ss:[esp+0x10]
        lea edi, ds:[esi+0x10]
        lea eax, ss:[esp+0x28]
        push edx
        push eax
        mov ecx, edi
        call public_6625220
        lea ecx, ss:[esp+0x10]
        lea edx, ss:[esp+0x20]
        push ecx
        push edx
        mov ecx, edi
        mov ebx, eax
        call public_6624ca0
        mov ebp, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x14]
        push eax
        push ecx
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x24], 0
        call public_6625500
        add esp, 0x10
        lea edx, ss:[esp+0x18]
        mov ecx, edi
        push ebx
        push ebp
        push edx
        call public_6623200
        mov ebp, dword ptr ss : [esp+0x2034]
        mov edi, dword ptr ss : [esp+0x2038]
        public_66220d7 : nop
        mov eax, dword ptr ss : [esp+0x203C]
        mov ecx, ebp
        push eax
        push edi
        call public_661ec90
        mov eax, dword ptr ss : [ebp+0x24]
        mov ebx, 1
        cmp eax, ebx
        jne public_6622125
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_6622125
        lea ecx, ss:[esp+0x18]
        lea edx, ss:[esp+0x20]
        push ecx
        push edx
        lea ecx, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        call public_6623ac0
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        je public_6622125
        mov dword ptr ds : [esi+0x28], eax
        mov byte ptr ds : [esi+0x2C], bl
        public_6622125 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        push 0
        push edi
        push esi
        call dword ptr ds : [eax+0x6C]
        mov eax, ebx
        pop esi
        pop ebx
        pop edi
        pop ebp
        add esp, 0x201C
        ret 0x10
        UNREACHABLE_TRAP(0x6621f90)
    }
}

#undef public_6621fac
#undef public_6621fb9
#undef public_6621fc9
#undef public_6622008
#undef public_662204d
#undef public_6622074
#undef public_66220d7
#undef public_6622125
