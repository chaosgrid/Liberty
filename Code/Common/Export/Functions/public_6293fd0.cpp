#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628a050);
CLANG_FORWARD_PROC_SYMBOL(public_628a410);
CLANG_FORWARD_PROC_SYMBOL(public_62af640);

#define public_629405a _public_629405a
#define public_6294073 _public_6294073
#define public_6294083 _public_6294083

PROC_DECLARE(0x6293fd0, internal_6293fd0, public_6293fd0);
extern "C" NAKED register_t __cdecl internal_6293fd0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        sub esp, 0x2C
        push esi
        push edi
        xor edi, edi
        test al, al
        mov esi, ecx
        je public_6294073
        mov eax, dword ptr ds : [public_63eb360]
        mov ecx, dword ptr ds : [public_63fc0e8]
        mov edx, dword ptr ds : [public_63fc0ec]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [public_63fc0f0]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], edx
        mov byte ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x30], edi
        mov byte ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x20], edx
        mov cl, byte ptr ds : [eax+0x38]
        test cl, cl
        je public_629405a
        add eax, 0x2C
        mov byte ptr ss : [esp+0x24], 1
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], eax
        public_629405a : nop
        mov edx, dword ptr ds : [esi]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+4]
        push eax
        call public_628a050
        add esp, 8
        mov edi, eax
        jmp public_6294083
        public_6294073 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        push eax
        call public_628a410
        add esp, 4
        public_6294083 : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_62af640
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+4], 0
        pop esi
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6293fd0)
    }
}

#undef public_629405a
#undef public_6294073
#undef public_6294083
