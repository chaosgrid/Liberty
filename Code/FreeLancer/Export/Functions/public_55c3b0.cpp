#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_434630);
CLANG_FORWARD_PROC_SYMBOL(public_55af90);

#define public_55c3e0 _public_55c3e0
#define public_55c3eb _public_55c3eb
#define public_55c4fb _public_55c4fb

PROC_DECLARE(0x55c3b0, internal_55c3b0, public_55c3b0);
extern "C" NAKED register_t __cdecl internal_55c3b0()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp+0x3A0], 1
        push esi
        jne public_55c3e0
        mov ebx, dword ptr ss : [ebp+0x37C]
        mov esi, dword ptr ss : [ebp+0x84]
        mov dword ptr ss : [ebp+0x84], ebx
        call public_55af90
        mov dword ptr ss : [ebp+0x84], esi
        jmp public_55c3eb
        public_55c3e0 : nop
        mov ebx, dword ptr ss : [ebp+0x84]
        call public_55af90
        public_55c3eb : nop
        push 0xB71
        call public_421ed0
        mov eax, dword ptr ss : [ebp+0x348]
        add esp, 4
        test eax, eax
        je public_55c4fb
        cmp ebx, 0xFFFFFFFF
        je public_55c4fb
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebx
        push eax
        call dword ptr ds : [ecx+0x98]
        fld qword ptr ds : [public_5e1738]
        fcos 
        mov edx, dword ptr ds : [public_5c6d90]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x38]
        rep movsd
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x30], 0
        fld qword ptr ds : [public_5e1738]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x94]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ss : [ebp+0x348]
        push 0
        mov edx, eax
        push 0x3F800000
        shr edx, 0x10
        push 1
        mov byte ptr ss : [esp+0x1C], dl
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, eax
        push 1
        mov byte ptr ss : [esp+0x26], al
        shr ecx, 8
        shr eax, 0x18
        push ebx
/*FIXUP push offset public_67dbf8 @0x55c4cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        mov byte ptr ss : [esp+0x2D], cl
        mov byte ptr ss : [esp+0x2F], al
        call public_434630
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x1C
        lea edx, ss:[esp+0x38]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x94]
        pop edi
        public_55c4fb : nop
        push 0xB71
        call public_421ed0
        add esp, 4
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x55c3b0)
    }
}

#undef public_55c3e0
#undef public_55c3eb
#undef public_55c4fb
