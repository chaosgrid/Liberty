#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5affc0);

#define public_5affe0 _public_5affe0
#define public_5b0006 _public_5b0006
#define public_5b001f _public_5b001f
#define public_5b002b _public_5b002b
#define public_5b0031 _public_5b0031
#define public_5b003e _public_5b003e
#define public_5b0040 _public_5b0040
#define public_5b0050 _public_5b0050

PROC_DECLARE(0x5affc0, internal_5affc0, public_5affc0);
extern "C" NAKED register_t __cdecl internal_5affc0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        je public_5b0050
        lea esi, ds:[edi+4]
        cmp esi, eax
        mov dword ptr ss : [esp+8], esi
        je public_5b0050
        push ebx
        nop 
        public_5affe0 : nop
        mov eax, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [esi]
        push eax
        push ebx
        call dword ptr ss : [esp+0x24]
        add esp, 8
        test al, al
        jne public_5b002b
        mov ecx, dword ptr ds : [esi-4]
        mov edi, esi
        add esi, 0xFFFFFFFC
        push ecx
        push ebx
        call dword ptr ss : [esp+0x24]
        add esp, 8
        test al, al
        je public_5b001f
        public_5b0006 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi-4]
        mov edi, esi
        sub esi, 4
        push eax
        push ebx
        call dword ptr ss : [esp+0x24]
        add esp, 8
        test al, al
        jne public_5b0006
        public_5b001f : nop
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], ebx
        mov edi, dword ptr ss : [esp+0x14]
        jmp public_5b0040
        public_5b002b : nop
        cmp edi, esi
        mov eax, esi
        je public_5b003e
        public_5b0031 : nop
        mov ecx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, edi
        mov dword ptr ds : [eax+4], ecx
        jne public_5b0031
        public_5b003e : nop
        mov dword ptr ds : [edi], ebx
        public_5b0040 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0xC], esi
        jne public_5affe0
        pop ebx
        public_5b0050 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5affc0)
    }
}

#undef public_5affe0
#undef public_5b0006
#undef public_5b001f
#undef public_5b002b
#undef public_5b0031
#undef public_5b003e
#undef public_5b0040
#undef public_5b0050
