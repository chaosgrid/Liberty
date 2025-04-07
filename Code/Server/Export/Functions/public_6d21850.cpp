#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60160);

#define public_6d21897 _public_6d21897
#define public_6d218ab _public_6d218ab
#define public_6d218b9 _public_6d218b9
#define public_6d218f8 _public_6d218f8
#define public_6d2190b _public_6d2190b
#define public_6d21918 _public_6d21918
#define public_6d2191e _public_6d2191e
#define public_6d2192d _public_6d2192d
#define public_6d21970 _public_6d21970
#define public_6d21997 _public_6d21997
#define public_6d219b2 _public_6d219b2
#define public_6d219c5 _public_6d219c5
#define public_6d219c8 _public_6d219c8
#define public_6d219cc _public_6d219cc
#define public_6d219ea _public_6d219ea
#define public_6d219f6 _public_6d219f6
#define public_6d21a18 _public_6d21a18
#define public_6d21a21 _public_6d21a21
#define public_6d21a30 _public_6d21a30
#define public_6d21a3e _public_6d21a3e
#define public_6d21a45 _public_6d21a45
#define public_6d21a70 _public_6d21a70
#define public_6d21a8e _public_6d21a8e
#define public_6d21a99 _public_6d21a99

PROC_DECLARE(0x6d21850, internal_6d21850, public_6d21850);
extern "C" NAKED register_t __cdecl internal_6d21850()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x34
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+4]
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, edi
        sub ecx, eax
        mov eax, dword ptr ds : [ebx+0x1C]
        sar ecx, 1
        cmp eax, ecx
        mov dword ptr ss : [ebp-8], ecx
        jbe public_6d218b9
        mov al, byte ptr ds : [ebx+0x24]
        test al, al
        jne public_6d218ab
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        je public_6d21897
        mov eax, dword ptr ds : [ebx]
        push edi
        push esi
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        lea esp, ss:[ebp-0x40]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_6d21897 : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d21a30
        cmp dword ptr ds : [esi+8], edi
        jne public_6d21a30
        public_6d218ab : nop
        xor al, al
        lea esp, ss:[ebp-0x40]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_6d218b9 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        test eax, eax
        mov dword ptr ss : [ebp-0xC], 0
        je public_6d2191e
        shl eax, 5
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6d60160
        mov eax, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ds : [ebx+0x2C]
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+4]
        add edx, eax
        shl edx, 5
        shl eax, 5
        mov edi, esp
        add edx, ecx
        add eax, ecx
        cmp eax, edx
        mov dword ptr ss : [ebp-0xC], edi
        mov dword ptr ss : [ebp-0x10], edi
        je public_6d21918
        public_6d218f8 : nop
        test edi, edi
        je public_6d2190b
        mov ecx, 8
        mov esi, eax
        rep movsd
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp-0x10]
        public_6d2190b : nop
        add edi, 0x20
        add eax, 0x20
        cmp eax, edx
        mov dword ptr ss : [ebp-0x10], edi
        jne public_6d218f8
        public_6d21918 : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edi, dword ptr ss : [ebp+0xC]
        public_6d2191e : nop
        mov edx, dword ptr ds : [ebx+0x20]
        lea eax, ds:[ebx+0x20]
        cmp ecx, edx
        lea ecx, ss:[ebp-8]
        jb public_6d2192d
        mov ecx, eax
        public_6d2192d : nop
        mov edx, dword ptr ds : [ebx+0x1C]
        shl edx, 1
        mov eax, edi
        sub eax, edx
        mov edx, dword ptr ds : [esi]
        add eax, 2
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp-0x2C], eax
        mov dword ptr ss : [ebp-0x24], eax
        xor eax, eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-0x1C], eax
        mov byte ptr ss : [ebp-0x18], al
        mov eax, dword ptr ds : [ecx]
        shl eax, 1
        mov dword ptr ss : [ebp-0x28], edi
        sub edi, eax
        cmp edi, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x34], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp-0x30], edx
        mov dword ptr ss : [ebp-8], edi
        je public_6d218ab
        public_6d21970 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        cmp eax, 0xFFFFFFFF
        je public_6d219ea
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        mov ecx, dword ptr ds : [eax+edx+0xC]
        lea eax, ds:[eax+edx+0xC]
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [ebp-0x10], ecx
        je public_6d219b2
        public_6d21997 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push edi
        lea eax, ss:[ebp-0x34]
        push eax
        call dword ptr ds : [edx+4]
        test al, al
        mov edi, dword ptr ss : [ebp-8]
        jne public_6d21a18
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d21997
        public_6d219b2 : nop
        mov edx, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [ebp-0x10]
        shl ecx, 5
        mov dword ptr ds : [ecx+eax+0xC], edx
        public_6d219c5 : nop
        mov esi, dword ptr ss : [ebp+8]
        public_6d219c8 : nop
        mov byte ptr ss : [ebp-1], 0
        public_6d219cc : nop
        mov al, byte ptr ss : [ebp-1]
        cmp byte ptr ds : [ebx+0x24], al
        jne public_6d21a45
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d21a21
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+4]
        movzx eax, al
        jmp public_6d21a3e
        public_6d219ea : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [ebp-0x10], eax
        je public_6d219c8
        public_6d219f6 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        push edi
        lea ecx, ss:[ebp-0x34]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        test al, al
        jne public_6d21a18
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp-0x10], eax
        jne public_6d219f6
        jmp public_6d219c5
        public_6d21a18 : nop
        mov esi, dword ptr ss : [ebp+8]
        mov byte ptr ss : [ebp-1], 1
        jmp public_6d219cc
        public_6d21a21 : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d21a30
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [esi+8], ecx
        je public_6d21a45
        public_6d21a30 : nop
        mov al, 1
        lea esp, ss:[ebp-0x40]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        public_6d21a3e : nop
        test al, al
        jne public_6d21a30
        mov esi, dword ptr ss : [ebp+8]
        public_6d21a45 : nop
        mov al, byte ptr ss : [ebp-1]
        test al, al
        je public_6d21a99
        mov ecx, dword ptr ds : [ebx+0x2C]
        test ecx, ecx
        je public_6d21a8e
        mov eax, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ds : [esi]
        shl eax, 5
        add eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [ebp-0xC]
        shl ecx, 5
        add ecx, edx
        cmp edx, ecx
        mov dword ptr ss : [ebp-0x10], ecx
        je public_6d21a8e
        lea ecx, ds:[ecx]
        public_6d21a70 : nop
        mov esi, edx
        mov edi, eax
        mov ecx, 8
        rep movsd
        mov ecx, dword ptr ss : [ebp-0x10]
        add edx, 0x20
        add eax, 0x20
        cmp edx, ecx
        jne public_6d21a70
        mov edi, dword ptr ss : [ebp-8]
        mov esi, dword ptr ss : [ebp+8]
        public_6d21a8e : nop
        mov al, byte ptr ds : [ebx+0x24]
        test al, al
        je public_6d218ab
        public_6d21a99 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        add edi, 2
        cmp edi, eax
        mov dword ptr ss : [ebp-8], edi
        jne public_6d21970
        xor al, al
        lea esp, ss:[ebp-0x40]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d21850)
    }
}

#undef public_6d21897
#undef public_6d218ab
#undef public_6d218b9
#undef public_6d218f8
#undef public_6d2190b
#undef public_6d21918
#undef public_6d2191e
#undef public_6d2192d
#undef public_6d21970
#undef public_6d21997
#undef public_6d219b2
#undef public_6d219c5
#undef public_6d219c8
#undef public_6d219cc
#undef public_6d219ea
#undef public_6d219f6
#undef public_6d21a18
#undef public_6d21a21
#undef public_6d21a30
#undef public_6d21a3e
#undef public_6d21a45
#undef public_6d21a70
#undef public_6d21a8e
#undef public_6d21a99
