#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f51170);
CLANG_FORWARD_PROC_SYMBOL(public_6f52100);
CLANG_FORWARD_PROC_SYMBOL(public_6f521c0);

#define public_6f521d6 _public_6f521d6
#define public_6f521f3 _public_6f521f3
#define public_6f52207 _public_6f52207
#define public_6f52210 _public_6f52210
#define public_6f52228 _public_6f52228
#define public_6f5224d _public_6f5224d
#define public_6f5225b _public_6f5225b

PROC_DECLARE(0x6f521c0, internal_6f521c0, public_6f521c0);
extern "C" NAKED register_t __cdecl internal_6f521c0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        xor ebp, ebp
        call public_6f52100
        mov edi, dword ptr ss : [esp+0x18]
        add esp, 4
        public_6f521d6 : nop
        mov eax, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [eax], 1
        jle public_6f521f3
        mov ecx, dword ptr ds : [esi]
        push 0x107
        push ecx
        call dword ptr ds : [public_6f5a0c4]
        add esp, 8
        jmp public_6f52207
        public_6f521f3 : nop
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        xor eax, eax
        mov ax, word ptr ds : [ecx+edx*2]
        and eax, 0x107
        public_6f52207 : nop
        test eax, eax
        jne public_6f52210
        cmp dword ptr ds : [esi], 0x5F
        jne public_6f5225b
        public_6f52210 : nop
        cmp ebp, 0x50
        jl public_6f52228
        push edi
/*FIXUP push offset public_6f610d0 @0x6f52216*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f610d0
        push esi
        mov byte ptr ds : [edi+0x50], 0
        call public_6f51170
        add esp, 0xC
        public_6f52228 : nop
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [edi+ebp], dl
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax]
        inc ebp
        dec ecx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_6f5224d
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [esi], eax
        jmp public_6f521d6
        public_6f5224d : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        mov dword ptr ds : [esi], eax
        jmp public_6f521d6
        public_6f5225b : nop
        mov byte ptr ds : [edi+ebp], 0
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f521c0)
    }
}

#undef public_6f521d6
#undef public_6f521f3
#undef public_6f52207
#undef public_6f52210
#undef public_6f52228
#undef public_6f5224d
#undef public_6f5225b
