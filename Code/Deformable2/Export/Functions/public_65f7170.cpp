#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7170);

#define public_65f71b5 _public_65f71b5

PROC_DECLARE(0x65f7170, internal_65f7170, public_65f7170);
extern "C" NAKED register_t __cdecl internal_65f7170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        setne al
        test al, al
        jne public_65f71b5
        mov eax, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push 0
        push esi
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        setge al
        public_65f71b5 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x65f7170)
    }
}

#undef public_65f71b5
