#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344070);
CLANG_FORWARD_PROC_SYMBOL(public_63450e0);
CLANG_FORWARD_PROC_SYMBOL(public_6347240);
CLANG_FORWARD_PROC_SYMBOL(public_6358680);
CLANG_FORWARD_PROC_SYMBOL(public_6358cb0);

#define public_6358ccd _public_6358ccd
#define public_6358cf2 _public_6358cf2
#define public_6358d14 _public_6358d14

PROC_DECLARE(0x6358cb0, internal_6358cb0, public_6358cb0);
extern "C" NAKED register_t __cdecl internal_6358cb0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0x28]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax+0x18]
        push esi
        lea esi, ds:[ecx+0x28]
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        lea edi, ss:[esp+0x14]
        mov ebx, 2
        public_6358ccd : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [edi], ecx
        call public_63450e0
        add esi, 0x1C
        add edi, 4
        dec ebx
        jne public_6358ccd
        mov eax, dword ptr ss : [ebp+0xA4]
        inc word ptr ds : [eax+0x10]
        lea esi, ss:[esp+0x14]
        mov edi, 2
        public_6358cf2 : nop
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+0x98]
        mov edx, dword ptr ds : [ecx+0x60]
        shl edx, 0x18
        cmp edx, 0x8000000
        jge public_6358d14
        mov eax, dword ptr ds : [ecx]
        test ah, 3
        jne public_6358d14
        call public_6347240
        public_6358d14 : nop
        add esi, 4
        dec edi
        jne public_6358cf2
        mov eax, dword ptr ss : [ebp+0x114]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        inc eax
        mov dword ptr ss : [ebp+0x114], eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        push edx
        call public_6358680
        mov ecx, dword ptr ss : [ebp+0xA4]
        add esp, 0xC
        dec word ptr ds : [ecx+0x10]
        call public_6344070
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6358cb0)
    }
}

#undef public_6358ccd
#undef public_6358cf2
#undef public_6358d14
