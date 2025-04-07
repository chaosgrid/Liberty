#include "Freelancer-PCH.h"


#define public_454059 _public_454059

PROC_DECLARE(0x453ff0, internal_453ff0, public_453ff0);
extern "C" NAKED register_t __cdecl internal_453ff0()
{
    __asm
    {
        sub esp, 0x30
        fild dword ptr ss : [esp+0x38]
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [ebx+0x54]
        test eax, eax
        fmul qword ptr ds : [public_5c75f8]
        fstp dword ptr ss : [esp+0x3C]
        je public_454059
        mov edx, dword ptr ds : [ebx+0x64]
        push esi
        push edi
        lea esi, ds:[ebx+0x6C]
        mov ecx, 9
        lea edi, ss:[esp+0xC]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x60]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [ebx+0x68]
        mov dword ptr ss : [esp+0x38], ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        push 1
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [ebx+0x54]
        mov esi, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ebx, dword ptr ds : [ebx+0x54]
        mov eax, dword ptr ds : [ebx]
        push esi
        push ebx
        call dword ptr ds : [eax+0x20]
        pop edi
        pop esi
        public_454059 : nop
        xor eax, eax
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x453ff0)
    }
}

#undef public_454059
