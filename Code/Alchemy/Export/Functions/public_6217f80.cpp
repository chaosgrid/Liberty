#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_620b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6215570);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624841b);

#define public_6217fb9 _public_6217fb9
#define public_6217fd9 _public_6217fd9
#define public_6217fdd _public_6217fdd
#define public_6217fe2 _public_6217fe2
#define public_621802f _public_621802f
#define public_6218031 _public_6218031
#define public_6218042 _public_6218042
#define public_6218048 _public_6218048
#define public_621805d _public_621805d
#define public_6218095 _public_6218095
#define public_62180b0 _public_62180b0
#define public_62180c5 _public_62180c5
#define public_62180da _public_62180da
#define public_62180ef _public_62180ef
#define public_6218104 _public_6218104
#define public_6218119 _public_6218119
#define public_6218131 _public_6218131
#define public_62181a6 _public_62181a6

PROC_DECLARE(0x6217f80, internal_6217f80, public_6217f80);
extern "C" NAKED register_t __cdecl internal_6217f80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624841b @0x6217f88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624841b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp ecx, 8
        jne public_62181a6
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_6217fb9 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6217fdd
        cmp cl, bl
        je public_6217fd9
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6217fdd
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6217fb9
        public_6217fd9 : nop
        xor eax, eax
        jmp public_6217fe2
        public_6217fdd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6217fe2 : nop
        cmp eax, ebx
        jne public_62181a6
        push 0x90
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_621802f
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_624ba48
        mov ecx, edi
        call public_6215570
        mov dword ptr ds : [esi], offset public_624cd20
        mov dword ptr ds : [edi], offset public_624cd80
        mov dword ptr ds : [esi+0x8C], 1
        mov ebp, esi
        jmp public_6218031
        public_621802f : nop
        xor ebp, ebp
        public_6218031 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        jne public_621805d
        mov eax, 0xFFFFFFFC
        public_6218042 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], ebp
        public_6218048 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        public_621805d : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [ebp+4]
        lea edi, ss:[ebp+4]
        push eax
        push edi
        call dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6218042
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [edi+0x84]
        mov dword ptr ss : [esp+0x24], 7
        cmp eax, ebx
        je public_6218095
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x84], ebx
        public_6218095 : nop
        mov eax, dword ptr ds : [edi+0x80]
        mov byte ptr ss : [esp+0x24], 6
        cmp eax, ebx
        je public_62180b0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x80], ebx
        public_62180b0 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov byte ptr ss : [esp+0x24], 5
        cmp eax, ebx
        je public_62180c5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], ebx
        public_62180c5 : nop
        mov eax, dword ptr ds : [edi+0x78]
        mov byte ptr ss : [esp+0x24], 4
        cmp eax, ebx
        je public_62180da
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x78], ebx
        public_62180da : nop
        mov eax, dword ptr ds : [edi+0x74]
        mov byte ptr ss : [esp+0x24], 3
        cmp eax, ebx
        je public_62180ef
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x74], ebx
        public_62180ef : nop
        mov eax, dword ptr ds : [edi+0x70]
        mov byte ptr ss : [esp+0x24], 2
        cmp eax, ebx
        je public_6218104
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x70], ebx
        public_6218104 : nop
        mov eax, dword ptr ds : [edi+0x6C]
        mov byte ptr ss : [esp+0x24], 1
        cmp eax, ebx
        je public_6218119
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x6C], ebx
        public_6218119 : nop
        mov eax, dword ptr ds : [edi+0x58]
        mov dword ptr ss : [esp+0x24], 9
        cmp eax, ebx
        je public_6218131
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x58], ebx
        public_6218131 : nop
        mov eax, dword ptr ds : [edi+0x50]
        lea esi, ds:[edi+0x4C]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x28], 8
        call public_620b3f0
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x2C]
        mov eax, dword ptr ds : [eax]
        push eax
        call public_620b3f0
        lea edx, ss:[esp+0x18]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_620b3a0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62460e0
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_620b260
        push ebp
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6218048
        public_62181a6 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        jmp public_6218048
        UNREACHABLE_TRAP(0x6217f80)
    }
}

#undef public_6217fb9
#undef public_6217fd9
#undef public_6217fdd
#undef public_6217fe2
#undef public_621802f
#undef public_6218031
#undef public_6218042
#undef public_6218048
#undef public_621805d
#undef public_6218095
#undef public_62180b0
#undef public_62180c5
#undef public_62180da
#undef public_62180ef
#undef public_6218104
#undef public_6218119
#undef public_6218131
#undef public_62181a6
