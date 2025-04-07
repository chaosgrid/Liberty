#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f08930);
CLANG_FORWARD_PROC_SYMBOL(public_6f62440);
CLANG_FORWARD_PROC_SYMBOL(public_6f77bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad09b);

#define public_6f08a4d _public_6f08a4d
#define public_6f08a5a _public_6f08a5a

PROC_DECLARE(0x6f08930, internal_6f08930, public_6f08930);
extern "C" NAKED register_t __cdecl internal_6f08930()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fad09b @0x6f08938*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad09b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xAC
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x184]
        mov eax, dword ptr ds : [eax]
        push esi
        push edi
        lea esi, ds:[eax+8]
        mov ecx, 9
        lea edi, ss:[esp+0x74]
        rep movsd
        mov eax, dword ptr ss : [esp+0x74]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6f08a5a
        mov edx, dword ptr ss : [ebp+0x168]
        lea eax, ss:[esp+0x98]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3664]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0xC
        call public_6eea860
        cmp eax, ebx
        je public_6f08a5a
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x14], cl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x94]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0xCC], ebx
        call public_6f77bd0
        test al, al
        je public_6f08a4d
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        call public_6f62440
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x44]
        add esp, 0x10
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x3C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ds : [public_6fb8110]
        fmul dword ptr ds : [public_6fb8110]
        fcompp 
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_6f08a4d
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        add ebp, 0x18C
        mov dword ptr ss : [ebp], edx
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ecx
        mov bl, 1
        public_6f08a4d : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6fa8fe0
        add esp, 4
        public_6f08a5a : nop
        mov ecx, dword ptr ss : [esp+0xBC]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xB8
        ret 
        UNREACHABLE_TRAP(0x6f08930)
    }
}

#undef public_6f08a4d
#undef public_6f08a5a
