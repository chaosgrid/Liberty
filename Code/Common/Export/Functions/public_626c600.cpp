#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c600);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626c64f _public_626c64f
#define public_626c657 _public_626c657
#define public_626c65d _public_626c65d
#define public_626c680 _public_626c680
#define public_626c688 _public_626c688
#define public_626c692 _public_626c692

PROC_DECLARE(0x626c600, internal_626c600, public_626c600);
extern "C" NAKED register_t __cdecl internal_626c600()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        lea edx, ds:[esi+8]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[edi+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ds:[esi+0x14]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0x14]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [esi+0x20]
        mov byte ptr ds : [edi+0x20], cl
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        jne public_626c64f
        xor eax, eax
        jmp public_626c657
        public_626c64f : nop
        mov eax, dword ptr ds : [esi+0x28]
        sub eax, ecx
        sar eax, 2
        public_626c657 : nop
        test eax, eax
        jge public_626c65d
        xor eax, eax
        public_626c65d : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov dword ptr ds : [edi+0x24], eax
        mov ecx, dword ptr ds : [esi+0x28]
        mov esi, dword ptr ds : [esi+0x24]
        add esp, 4
        cmp esi, ecx
        je public_626c692
        lea ebx, ds:[ebx]
        public_626c680 : nop
        test eax, eax
        je public_626c688
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_626c688 : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_626c680
        public_626c692 : nop
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x2C], eax
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626c600)
    }
}

#undef public_626c64f
#undef public_626c657
#undef public_626c65d
#undef public_626c680
#undef public_626c688
#undef public_626c692
