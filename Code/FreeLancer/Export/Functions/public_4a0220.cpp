#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a0220);

#define public_4a0240 _public_4a0240
#define public_4a02a3 _public_4a02a3
#define public_4a031d _public_4a031d
#define public_4a037e _public_4a037e
#define public_4a04b4 _public_4a04b4
#define public_4a04f0 _public_4a04f0
#define public_4a0549 _public_4a0549

PROC_DECLARE(0x4a0220, internal_4a0220, public_4a0220);
extern "C" NAKED register_t __cdecl internal_4a0220()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor eax, eax
        cmp ecx, 7
        sete al
        push edi
        lea ebx, ds:[esi+0xF88]
        mov ebp, 0xF
        mov edi, eax
        nop 
        public_4a0240 : nop
        mov ecx, dword ptr ds : [ebx-0x3C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 0x24
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 0x24
        call dword ptr ds : [eax+0xA8]
        add ebx, 4
        dec ebp
        jne public_4a0240
        mov ecx, dword ptr ds : [esi+0xFC8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 0x24
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xFCC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 0x24
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [public_6720a0]
        cmp eax, 6
        mov ebx, 3
        je public_4a02a3
        cmp eax, 7
        jne public_4a037e
        public_4a02a3 : nop
        mov eax, dword ptr ds : [esi+0xF38]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xF3C]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xF40]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0x7D0]
        test eax, eax
        jne public_4a031d
        mov ecx, dword ptr ds : [esi+0xAF8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xAFC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB00]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xB04]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        jmp public_4a037e
        public_4a031d : nop
        mov eax, dword ptr ds : [esi+0x8D8]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x8DC]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0xB4C]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0xC14]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0xC18]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0xC58]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x7F0]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0xB5C]
        test eax, eax
        je public_4a037e
        mov ecx, dword ptr ds : [esi+0xB60]
        sub ecx, eax
        sar ecx, 2
        test ecx, ecx
        jbe public_4a037e
        mov eax, dword ptr ds : [esi+0xB50]
        or byte ptr ds : [eax+0x6C], bl
        public_4a037e : nop
        mov edi, dword ptr ss : [esp+0x14]
        xor eax, eax
        test edi, edi
        sete al
        push 0
        mov dword ptr ds : [public_6720a0], edi
        mov ecx, dword ptr ds : [esi+0x8D8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ds : [public_6720a0]
        mov ecx, dword ptr ds : [esi+0x8DC]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebp, 1
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ds : [public_6720a0]
        mov ecx, dword ptr ds : [esi+0xB4C]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp edi, 2
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ds : [public_6720a0]
        mov ecx, dword ptr ds : [esi+0xB50]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebp, ebx
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ds : [public_6720a0]
        mov ecx, dword ptr ds : [esi+0xC14]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebp, 4
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ds : [public_6720a0]
        mov ecx, dword ptr ds : [esi+0xC18]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebp, 7
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ds : [public_6720a0]
        mov ecx, dword ptr ds : [esi+0xC58]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebp, 5
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_6720a0]
        cmp eax, 1
        je public_4a04b4
        cmp eax, 2
        je public_4a04b4
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        jmp public_4a04f0
        public_4a04b4 : nop
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4a04f0 : nop
        cmp dword ptr ds : [public_6720a0], 6
        jne public_4a0549
        mov eax, dword ptr ds : [esi+0x8D8]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0x8DC]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xB4C]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xB50]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xC14]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xC18]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0xC58]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi+0x7F0]
        and byte ptr ds : [eax+0x6C], 0xFC
        public_4a0549 : nop
        mov eax, dword ptr ds : [public_6720a0]
        mov ecx, dword ptr ds : [eax*4+public_611c84]
        mov esi, dword ptr ds : [esi+0xB54]
        mov edx, dword ptr ds : [esi]
        push 0
        push ecx
        push 0x1E
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4a0220)
    }
}

#undef public_4a0240
#undef public_4a02a3
#undef public_4a031d
#undef public_4a037e
#undef public_4a04b4
#undef public_4a04f0
#undef public_4a0549
