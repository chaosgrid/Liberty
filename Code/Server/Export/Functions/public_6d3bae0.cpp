#include "Server-PCH.h"


#define public_6d3bb20 _public_6d3bb20
#define public_6d3bb3c _public_6d3bb3c
#define public_6d3bb4e _public_6d3bb4e
#define public_6d3bb6d _public_6d3bb6d
#define public_6d3bb89 _public_6d3bb89
#define public_6d3bb98 _public_6d3bb98
#define public_6d3bbb1 _public_6d3bbb1
#define public_6d3bbc0 _public_6d3bbc0
#define public_6d3bbd0 _public_6d3bbd0
#define public_6d3bbec _public_6d3bbec
#define public_6d3bbfa _public_6d3bbfa
#define public_6d3bc0b _public_6d3bc0b
#define public_6d3bc20 _public_6d3bc20
#define public_6d3bc3b _public_6d3bc3b
#define public_6d3bc70 _public_6d3bc70
#define public_6d3bc82 _public_6d3bc82
#define public_6d3bc8c _public_6d3bc8c
#define public_6d3bc90 _public_6d3bc90
#define public_6d3bca0 _public_6d3bca0
#define public_6d3bcac _public_6d3bcac

PROC_DECLARE(0x6d3bae0, internal_6d3bae0, public_6d3bae0);
extern "C" NAKED register_t __cdecl internal_6d3bae0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0x18]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, esi
        je public_6d3bb4e
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x24], ebx
        mov ebx, edx
        sub ebx, eax
        lea ebx, ds:[ebx]
        public_6d3bb20 : nop
        cmp dword ptr ss : [esp+0x24], ecx
        je public_6d3bc0b
        mov dx, word ptr ds : [ecx]
        cmp word ptr ds : [eax], dx
        je public_6d3bb3c
        cmp word ptr ds : [eax+ebx], dx
        jne public_6d3bc0b
        public_6d3bb3c : nop
        add eax, 2
        add ecx, 2
        cmp eax, edi
        jne public_6d3bb20
        cmp ecx, esi
        jne public_6d3bb98
        mov ebx, dword ptr ss : [esp+0x14]
        public_6d3bb4e : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3bb6d
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0xC
        ret 8
        public_6d3bb6d : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3bb89
        cmp dword ptr ds : [eax+8], esi
        jne public_6d3bb89
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 8
        public_6d3bb89 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xC
        ret 8
        public_6d3bb98 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6d3bbb1
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], 1
        public_6d3bbb1 : nop
        cmp dword ptr ss : [esp+0x10], eax
        jae public_6d3bc20
        mov edi, dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ss : [ebp+8]
        lea ecx, ds:[ecx]
        public_6d3bbc0 : nop
        cmp ebx, edi
        mov ecx, esi
        je public_6d3bbfa
        mov esi, dword ptr ss : [ebp+0x18]
        mov eax, ebx
        sub esi, ebx
        lea ecx, ds:[ecx]
        public_6d3bbd0 : nop
        cmp dword ptr ss : [esp+0x24], ecx
        je public_6d3bcac
        mov dx, word ptr ds : [ecx]
        cmp word ptr ds : [eax], dx
        je public_6d3bbec
        cmp word ptr ds : [eax+esi], dx
        jne public_6d3bcac
        public_6d3bbec : nop
        add eax, 2
        add ecx, 2
        cmp eax, edi
        jne public_6d3bbd0
        mov eax, dword ptr ss : [esp+0x18]
        public_6d3bbfa : nop
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        jb public_6d3bbc0
        jmp public_6d3bc20
        public_6d3bc0b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_6d3bcac
        lea ebx, ds:[ebx]
        public_6d3bc20 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d3bc90
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d3bc3b : nop
        jne public_6d3bca0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0x10]
        jae public_6d3bcac
        mov edi, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+8]
        inc edi
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ds : [ecx+0xC]
        cmp eax, edi
        mov edx, esi
        je public_6d3bc8c
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx+0x18]
        mov ebx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        lea esp, ss:[esp]
        public_6d3bc70 : nop
        cmp ebx, edx
        je public_6d3bcac
        mov si, word ptr ds : [edx]
        cmp word ptr ds : [eax], si
        je public_6d3bc82
        cmp word ptr ds : [eax+ecx], si
        jne public_6d3bcac
        public_6d3bc82 : nop
        add eax, 2
        add edx, 2
        cmp eax, edi
        jne public_6d3bc70
        public_6d3bc8c : nop
        mov esi, edx
        jmp public_6d3bc20
        public_6d3bc90 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3bca0
        cmp dword ptr ds : [eax+8], esi
        jmp public_6d3bc3b
        public_6d3bca0 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 8
        public_6d3bcac : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6d3bae0)
    }
}

#undef public_6d3bb20
#undef public_6d3bb3c
#undef public_6d3bb4e
#undef public_6d3bb6d
#undef public_6d3bb89
#undef public_6d3bb98
#undef public_6d3bbb1
#undef public_6d3bbc0
#undef public_6d3bbd0
#undef public_6d3bbec
#undef public_6d3bbfa
#undef public_6d3bc0b
#undef public_6d3bc20
#undef public_6d3bc3b
#undef public_6d3bc70
#undef public_6d3bc82
#undef public_6d3bc8c
#undef public_6d3bc90
#undef public_6d3bca0
#undef public_6d3bcac
