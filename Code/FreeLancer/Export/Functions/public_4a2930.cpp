#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2930);

#define public_4a2947 _public_4a2947
#define public_4a2960 _public_4a2960
#define public_4a2988 _public_4a2988
#define public_4a299b _public_4a299b
#define public_4a29f1 _public_4a29f1
#define public_4a2a40 _public_4a2a40

PROC_DECLARE(0x4a2930, internal_4a2930, public_4a2930);
extern "C" NAKED register_t __cdecl internal_4a2930()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xFD8]
        test eax, eax
        push esi
        push edi
        jne public_4a2947
        xor edx, edx
        jmp public_4a2960
        public_4a2947 : nop
        mov ecx, dword ptr ss : [ebp+0xFDC]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_4a2960 : nop
        mov edi, dword ptr ss : [ebp+0x1008]
        lea ecx, ds:[edi+edi*2]
        shl ecx, 3
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], ecx
        lea esi, ss:[ebp+0xF88]
        mov dword ptr ss : [esp+0x1C], 0xF
        mov bl, 3
        public_4a2988 : nop
        cmp edi, edx
        mov eax, dword ptr ds : [esi-0x3C]
        jl public_4a299b
        and byte ptr ds : [eax+0x6C], 0xFC
        mov eax, dword ptr ds : [esi]
        and byte ptr ds : [eax+0x6C], 0xFC
        jmp public_4a29f1
        public_4a299b : nop
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi]
        or byte ptr ds : [eax+0x6C], bl
        mov edi, dword ptr ss : [ebp+0xFD8]
        mov eax, dword ptr ds : [edi+ecx+0x10]
        mov ebx, dword ptr ss : [ebp+0xFE8]
        mov eax, dword ptr ds : [ebx+eax*8]
        add edi, ecx
        mov ecx, dword ptr ds : [esi-0x3C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [edi+0x14]
        mov edi, dword ptr ss : [ebp+0xFF8]
        mov eax, dword ptr ds : [edi+eax*8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        mov bl, 3
        public_4a29f1 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc edi
        add ecx, 0x18
        add esi, 4
        dec eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_4a2988
        mov ecx, dword ptr ss : [ebp+0xFC4]
        lea esi, ds:[edx-0xF]
        test esi, esi
        push 0
        jg public_4a2a40
        mov edx, dword ptr ds : [ecx]
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ss : [ebp+0xFC4]
        mov al, byte ptr ss : [ebp+0x6C]
        pop edi
        and al, 0xFD
        pop esi
        mov byte ptr ss : [ebp+0x6C], al
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_4a2a40 : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        push 2
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [ebp+0xFC4]
        mov bl, byte ptr ds : [eax+0x6C]
        add esi, 2
        or bl, 2
        push esi
        mov byte ptr ds : [eax+0x6C], bl
        mov ebp, dword ptr ss : [ebp+0xFC4]
        mov edx, dword ptr ss : [ebp]
        push 0
        push 0x37
        mov ecx, ebp
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4a2930)
    }
}

#undef public_4a2947
#undef public_4a2960
#undef public_4a2988
#undef public_4a299b
#undef public_4a29f1
#undef public_4a2a40
