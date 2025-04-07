#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_622239f _public_622239f
#define public_62223bf _public_62223bf
#define public_62223c3 _public_62223c3
#define public_62223c8 _public_62223c8
#define public_62223fe _public_62223fe
#define public_6222400 _public_6222400
#define public_6222416 _public_6222416
#define public_622243d _public_622243d
#define public_622244f _public_622244f

PROC_DECLARE(0x6222380, internal_6222380, public_6222380);
extern "C" NAKED register_t __cdecl internal_6222380()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        xor ebx, ebx
        xor ebp, ebp
        cmp dword ptr ds : [edi], 8
        jne public_622243d
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_622239f : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_62223c3
        cmp cl, bl
        je public_62223bf
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_62223c3
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_622239f
        public_62223bf : nop
        xor eax, eax
        jmp public_62223c8
        public_62223c3 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62223c8 : nop
        cmp eax, ebx
        jne public_622243d
        push 0x24
        call public_624612c
        add esp, 4
        cmp eax, ebx
        je public_62223fe
        mov cl, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+0xC], ebx
        mov byte ptr ds : [eax+8], cl
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x1C], ebx
        mov dword ptr ds : [eax], offset public_624d838
        mov dword ptr ds : [eax+0x20], 1
        mov esi, eax
        jmp public_6222400
        public_62223fe : nop
        xor esi, esi
        public_6222400 : nop
        cmp esi, ebx
        jne public_6222416
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6222416 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x48]
        mov edi, eax
        cmp edi, ebx
        je public_622244f
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_622243d : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        pop ebp
        pop ebx
        ret 0xC
        public_622244f : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6222380)
    }
}

#undef public_622239f
#undef public_62223bf
#undef public_62223c3
#undef public_62223c8
#undef public_62223fe
#undef public_6222400
#undef public_6222416
#undef public_622243d
#undef public_622244f
