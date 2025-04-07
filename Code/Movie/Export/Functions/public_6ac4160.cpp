#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4160);
CLANG_FORWARD_PROC_SYMBOL(public_6ac45a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6aca890);
CLANG_FORWARD_PROC_SYMBOL(public_6acb290);

#define public_6ac4195 _public_6ac4195
#define public_6ac41dc _public_6ac41dc
#define public_6ac4211 _public_6ac4211
#define public_6ac4248 _public_6ac4248

PROC_DECLARE(0x6ac4160, internal_6ac4160, public_6ac4160);
extern "C" NAKED register_t __cdecl internal_6ac4160()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+0x100]
        mov ebx, dword ptr ds : [eax+0x108]
        test esi, esi
        mov dword ptr ss : [esp+8], ecx
        jne public_6ac4195
        push 0x231C
        call public_6ac4f80
        mov esi, eax
        test esi, esi
        je public_6ac4248
        public_6ac4195 : nop
        lea eax, ds:[esi+0x538]
        mov edx, esi
        sub edx, eax
        mov ecx, dword ptr ss : [esp+0x18]
        sar edx, 2
        not edx
        and edx, 1
        push ebp
        push edi
        lea edi, ds:[esi+0x510]
        lea eax, ds:[eax+edx*4]
        push ebx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        push edi
        lea ebp, ds:[esi+0xA74]
        push esi
        jne public_6ac41dc
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        call public_6acb290
        push ebx
        push ebp
        push edi
        push esi
        jmp public_6ac4211
        public_6ac41dc : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        call public_6acb290
        lea eax, ds:[esi+0xA4C]
        push ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        push edx
        call public_6acb290
        push ebx
        lea eax, ds:[esi+0xA4C]
        push ebp
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        public_6ac4211 : nop
        push edi
        push esi
        call public_6aca890
        push esi
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        mov edx, dword ptr ds : [eax+0x110]
        mov eax, dword ptr ss : [esp+0x1C]
        push edx
        lea ecx, ds:[eax+eax]
        push ecx
        push ebp
        call public_6ac45a0
        pop edi
        pop ebp
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        jne public_6ac4248
        push esi
        call public_6ac4fb0
        public_6ac4248 : nop
        pop esi
        pop ebx
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x6ac4160)
    }
}

#undef public_6ac4195
#undef public_6ac41dc
#undef public_6ac4211
#undef public_6ac4248
