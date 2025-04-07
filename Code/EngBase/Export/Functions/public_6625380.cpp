#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d700);
CLANG_FORWARD_PROC_SYMBOL(public_661f550);
CLANG_FORWARD_PROC_SYMBOL(public_661f750);

#define public_662539d _public_662539d
#define public_66253c1 _public_66253c1
#define public_66253c5 _public_66253c5
#define public_66253ca _public_66253ca
#define public_6625423 _public_6625423
#define public_6625436 _public_6625436
#define public_6625447 _public_6625447

PROC_DECLARE(0x6625380, internal_6625380, public_6625380);
extern "C" NAKED register_t __cdecl internal_6625380()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        cmp dword ptr ds : [edi], 8
        jne public_6625436
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_662539d : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66253c5
        test cl, cl
        je public_66253c1
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66253c5
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_662539d
        public_66253c1 : nop
        xor eax, eax
        jmp public_66253ca
        public_66253c5 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66253ca : nop
        test eax, eax
        pop ebx
        jne public_6625436
        push 1
        push 0x64
        call dword ptr ds : [public_6629068]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6625423
        mov ecx, esi
        call public_661f550
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi+0x60], 1
        mov dword ptr ds : [esi], offset public_6629630
        call public_661d700
        mov edi, eax
        test edi, edi
        je public_6625447
        call public_661f750
        push esi
        call dword ptr ds : [public_662902c]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6625423 : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        pop edi
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6625436 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        pop ebp
        ret 0xC
        public_6625447 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6625380)
    }
}

#undef public_662539d
#undef public_66253c1
#undef public_66253c5
#undef public_66253ca
#undef public_6625423
#undef public_6625436
#undef public_6625447
