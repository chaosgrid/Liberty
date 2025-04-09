#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59d9b0);

#define public_5990f3 _public_5990f3
#define public_5990fa _public_5990fa
#define public_59911b _public_59911b
#define public_599145 _public_599145
#define public_599157 _public_599157

PROC_DECLARE(0x599090, internal_599090, public_599090);
extern "C" NAKED register_t __cdecl internal_599090()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        mov esi, ecx
        jne public_599145
        cmp dword ptr ds : [edi+4], 2
        jne public_59911b
        mov al, byte ptr ds : [esi+0xD8]
        test al, al
        je public_5990fa
        mov edx, dword ptr ds : [esi+0x98]
        test edx, edx
        mov ecx, dword ptr ds : [esi+0xDC]
        je public_5990f3
        mov eax, dword ptr ds : [esi+0x9C]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        jae public_5990f3
        mov eax, dword ptr ds : [esi+0xB8]
        mov dl, byte ptr ds : [eax+ecx*8+1]
        test dl, dl
        lea eax, ds:[eax+ecx*8]
        je public_5990f3
        cmp byte ptr ds : [eax], 0
        je public_5990f3
        mov dword ptr ds : [esi+0xD4], ecx
        mov byte ptr ds : [esi+0xD0], 1
        public_5990f3 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_5990fa : nop
        mov al, byte ptr ds : [esi+0x130]
        test al, al
        je public_599145
        push esi
        call public_59d8d0
        add esp, 4
        pop edi
        mov byte ptr ds : [esi+0x131], 1
        mov al, 1
        pop esi
        ret 4
        public_59911b : nop
        call public_59d9b0
        cmp eax, esi
        jne public_599145
        mov al, byte ptr ds : [esi+0x131]
        test al, al
        je public_599145
        push esi
        mov byte ptr ds : [esi+0x131], 0
        call public_59d960
        add esp, 4
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_599145 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_599157
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x4C]
        pop edi
        pop esi
        ret 4
        public_599157 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x599090)
    }
}

#undef public_5990f3
#undef public_5990fa
#undef public_59911b
#undef public_599145
#undef public_599157
