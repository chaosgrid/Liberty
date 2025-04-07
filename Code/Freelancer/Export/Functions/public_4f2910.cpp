#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f2910);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf139);

#define public_4f297b _public_4f297b
#define public_4f298f _public_4f298f
#define public_4f2992 _public_4f2992
#define public_4f29ac _public_4f29ac
#define public_4f29cb _public_4f29cb
#define public_4f29d3 _public_4f29d3
#define public_4f29d9 _public_4f29d9
#define public_4f2a00 _public_4f2a00
#define public_4f2a26 _public_4f2a26
#define public_4f2a39 _public_4f2a39

PROC_DECLARE(0x4f2910, internal_4f2910, public_4f2910);
extern "C" NAKED register_t __cdecl internal_4f2910()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf139 @0x4f2912*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf139
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x2C], eax
        je public_4f29ac
        push eax
        call dword ptr ds : [public_5c71c8]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        lea edi, ss:[ebp+1]
        add esp, 4
        cmp edi, eax
        jbe public_4f2992
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4f297b
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_4f298f
        public_4f297b : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_4f298f : nop
        mov dword ptr ds : [esi+4], edi
        public_4f2992 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov word ptr ds : [edx+ebp*2], 0
        public_4f29ac : nop
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], eax
        mov cl, byte ptr ds : [ebx+0xC]
        mov byte ptr ds : [esi+0xC], cl
        mov ecx, dword ptr ds : [ebx+0x10]
        test ecx, ecx
        mov dword ptr ss : [esp+0x24], 0
        jne public_4f29cb
        xor eax, eax
        jmp public_4f29d3
        public_4f29cb : nop
        mov eax, dword ptr ds : [ebx+0x14]
        sub eax, ecx
        sar eax, 3
        public_4f29d3 : nop
        test eax, eax
        jge public_4f29d9
        xor eax, eax
        public_4f29d9 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_5b7e84
        mov dword ptr ds : [esi+0x10], eax
        mov edx, dword ptr ds : [ebx+0x14]
        mov ebp, dword ptr ds : [ebx+0x10]
        add esp, 4
        cmp ebp, edx
        mov edi, eax
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x10], edi
        je public_4f2a39
        public_4f2a00 : nop
        mov dword ptr ss : [esp+0x18], edi
        test edi, edi
        mov byte ptr ss : [esp+0x24], 1
        je public_4f2a26
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ss : [ebp+4]
        mov byte ptr ds : [edi+4], cl
        mov ecx, eax
        test ecx, ecx
        je public_4f2a26
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x2C]
        public_4f2a26 : nop
        add edi, 8
        add ebp, 8
        cmp ebp, edx
        mov byte ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x10], edi
        jne public_4f2a00
        public_4f2a39 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov eax, dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov edx, dword ptr ds : [ebx+0x24]
        mov dword ptr ds : [esi+0x24], edx
        mov eax, dword ptr ds : [ebx+0x28]
        mov dword ptr ds : [esi+0x28], eax
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [esi+0x2C], ecx
        mov dl, byte ptr ds : [ebx+0x30]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov byte ptr ds : [esi+0x30], dl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x4f2910)
    }
}

#undef public_4f297b
#undef public_4f298f
#undef public_4f2992
#undef public_4f29ac
#undef public_4f29cb
#undef public_4f29d3
#undef public_4f29d9
#undef public_4f2a00
#undef public_4f2a26
#undef public_4f2a39
