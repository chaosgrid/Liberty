#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_4c6f70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4c6f80 _public_4c6f80
#define public_4c6f97 _public_4c6f97
#define public_4c6fb4 _public_4c6fb4
#define public_4c6fdc _public_4c6fdc
#define public_4c6ff9 _public_4c6ff9
#define public_4c7049 _public_4c7049
#define public_4c7065 _public_4c7065
#define public_4c7077 _public_4c7077

PROC_DECLARE(0x4c6f70, internal_4c6f70, public_4c6f70);
extern "C" NAKED register_t __cdecl internal_4c6f70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66873c]
        sub esp, 0xC
        test eax, eax
        jne public_4c6f80
        add esp, 0xC
        ret 
        public_4c6f80 : nop
        push eax
        mov ecx, offset public_668708
        call public_43a510
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        jne public_4c6f97
        add esp, 0xC
        ret 
        public_4c6f97 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+4], 0
        je public_4c7077
        push ebx
        push ebp
        push edi
        public_4c6fb4 : nop
        mov ebp, dword ptr ds : [esi+0xC]
        push ebp
        call dword ptr ds : [public_5c629c]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_4c7065
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_4c6fdc
        cmp dword ptr ds : [esi+0x24], eax
        jne public_4c7065
        public_4c6fdc : nop
        mov ecx, dword ptr ss : [esp+0x28]
        test ecx, ecx
        mov bl, 1
        je public_4c6ff9
        xor eax, eax
        mov ax, word ptr ds : [esi+0xA]
        push eax
        call dword ptr ds : [public_5c6370]
        test eax, eax
        jne public_4c6ff9
        xor bl, bl
        public_4c6ff9 : nop
        push ebp
        call public_47e460
        add esp, 4
        cmp eax, 4
        je public_4c7049
        mov al, byte ptr ds : [edi+0x70]
        test al, al
        jne public_4c7049
        test bl, bl
        je public_4c7049
        mov edi, dword ptr ds : [edi+0x48]
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        call public_438060
        fmul dword ptr ds : [public_5d6d3c]
        fadd dword ptr ds : [public_5d1914]
        call public_5b7ec0
        fild dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        fmul dword ptr ds : [esi+0x18]
        fimul dword ptr ss : [esp+0x18]
        call public_5b7ec0
        add dword ptr ss : [esp+0x10], eax
        jmp public_4c7065
        public_4c7049 : nop
        mov edi, dword ptr ds : [edi+0x48]
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        call public_438060
        call public_5b7ec0
        mov ecx, dword ptr ds : [esi+0x1C]
        imul ecx, eax
        add dword ptr ss : [esp+0x10], ecx
        public_4c7065 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edx+4]
        jne public_4c6fb4
        pop edi
        pop ebp
        pop ebx
        public_4c7077 : nop
        mov eax, dword ptr ss : [esp+4]
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4c6f70)
    }
}

#undef public_4c6f80
#undef public_4c6f97
#undef public_4c6fb4
#undef public_4c6fdc
#undef public_4c6ff9
#undef public_4c7049
#undef public_4c7065
#undef public_4c7077
