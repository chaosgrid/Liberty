#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a33e0);
CLANG_FORWARD_PROC_SYMBOL(public_62c6170);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e50);
CLANG_FORWARD_PROC_SYMBOL(public_62d5890);
CLANG_FORWARD_PROC_SYMBOL(public_62d7510);
CLANG_FORWARD_PROC_SYMBOL(public_62d7640);
CLANG_FORWARD_PROC_SYMBOL(public_62d9490);
CLANG_FORWARD_PROC_SYMBOL(public_62e5190);
CLANG_FORWARD_PROC_SYMBOL(public_62e8840);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);

#define public_62c61e6 _public_62c61e6
#define public_62c6220 _public_62c6220
#define public_62c622a _public_62c622a

PROC_DECLARE(0x62c6170, internal_62c6170, public_62c6170);
extern "C" NAKED register_t __cdecl internal_62c6170()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        push edi
        add ecx, 0x142C
        call public_62ed5a0
        mov ebx, eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        lea edi, ds:[esi+0xA4]
        call dword ptr ds : [eax+0x20]
        push eax
        mov ecx, edi
        call public_62d4e50
        mov ecx, dword ptr ds : [esi+0x350]
        push ecx
        mov ecx, edi
        call public_62d9490
        push ebx
        mov ecx, edi
        call public_62d7510
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8840
        test al, al
        je public_62c61e6
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0x3F800000
        call public_62d7640
        public_62c61e6 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi+0x24]
        push 0
        add edx, 0x14FC
        push ebx
        push edx
        call public_62e5190
        add esp, 0xC
        lea ecx, ds:[esi+0x164]
        test al, al
        mov eax, dword ptr ds : [ecx]
        je public_62c6220
        mov edx, dword ptr ds : [esi+0x1C]
        push edx
        call dword ptr ds : [eax+4]
        push 0x3F800000
        jmp public_62c622a
        public_62c6220 : nop
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x34C]
        push ecx
        public_62c622a : nop
        lea edi, ds:[esi+0x2C]
        mov ecx, edi
        call public_62a33e0
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x20]
        push eax
        mov ecx, edi
        call public_62d4e50
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        mov ecx, edi
        fld dword ptr ds : [eax+0x20]
        lea eax, ss:[esp+0xC]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        push eax
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        call public_62d5890
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62c6170)
    }
}

#undef public_62c61e6
#undef public_62c6220
#undef public_62c622a
