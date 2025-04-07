#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c30850);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2f500 _public_6c2f500
#define public_6c2f524 _public_6c2f524
#define public_6c2f528 _public_6c2f528
#define public_6c2f52d _public_6c2f52d
#define public_6c2f594 _public_6c2f594
#define public_6c2f5a7 _public_6c2f5a7
#define public_6c2f5c0 _public_6c2f5c0

PROC_DECLARE(0x6c2f4e0, internal_6c2f4e0, public_6c2f4e0);
extern "C" NAKED register_t __cdecl internal_6c2f4e0()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, 0x18
        jne public_6c2f5c0
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        push ebx
        nop 
        public_6c2f500 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c2f528
        test cl, cl
        je public_6c2f524
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c2f528
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c2f500
        public_6c2f524 : nop
        xor eax, eax
        jmp public_6c2f52d
        public_6c2f528 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c2f52d : nop
        test eax, eax
        pop ebx
        jne public_6c2f5c0
        push 0x28
        call public_6c34eac
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6c2f5a7
        lea eax, ss:[esp+0x14]
        push eax
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_6c36570
        call public_6c30850
        lea eax, ds:[esi+0x1C]
        mov dword ptr ds : [eax], offset public_6c36564
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6c36530
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        mov dword ptr ds : [esi+0x18], ecx
        jne public_6c2f594
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x18], eax
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        xor eax, eax
        pop ebp
        ret 0xC
        public_6c2f594 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        xor eax, eax
        pop ebp
        ret 0xC
        public_6c2f5a7 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        lea ebx, ds:[ebx]
        public_6c2f5c0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ebp
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6c2f4e0)
    }
}

#undef public_6c2f500
#undef public_6c2f524
#undef public_6c2f528
#undef public_6c2f52d
#undef public_6c2f594
#undef public_6c2f5a7
#undef public_6c2f5c0
