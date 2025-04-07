#include "Content-PCH.h"

PROC_DECLARE(0x6f1b030, internal_6f1b030, public_6f1b030);
extern "C" NAKED register_t __cdecl internal_6f1b030()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ds : [public_6fb3020]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        push 1
        mov ecx, esi
        call ebx
        push 2
        mov ecx, esi
        mov dword ptr ds : [edi+0xC], eax
        call ebx
        push 3
        mov ecx, esi
        mov dword ptr ds : [edi+0x3C], eax
        call ebx
        push 4
        mov ecx, esi
        mov dword ptr ds : [edi+0x38], eax
        call ebx
        push 5
        mov ecx, esi
        mov dword ptr ds : [edi+0x44], eax
        call ebx
        push 7
        mov ecx, esi
        mov dword ptr ds : [edi+0x40], eax
        call dword ptr ds : [public_6fb3044]
        fstp qword ptr ss : [esp+0xC]
        push 8
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        fld qword ptr ss : [esp+0xC]
        push 6
        mov ecx, esi
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [public_6fb3044]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        add edi, 0x48
        mov dword ptr ds : [edi], eax
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6f1b030)
    }
}
