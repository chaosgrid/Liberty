#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62baf00);
CLANG_FORWARD_PROC_SYMBOL(public_6315b90);
CLANG_FORWARD_PROC_SYMBOL(public_631a680);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6315bb2 _public_6315bb2
#define public_6315bba _public_6315bba
#define public_6315bc5 _public_6315bc5
#define public_6315bcd _public_6315bcd
#define public_6315be0 _public_6315be0
#define public_6315bfd _public_6315bfd
#define public_6315c06 _public_6315c06
#define public_6315c16 _public_6315c16
#define public_6315c38 _public_6315c38
#define public_6315c55 _public_6315c55
#define public_6315c5d _public_6315c5d
#define public_6315c65 _public_6315c65
#define public_6315c6d _public_6315c6d
#define public_6315c75 _public_6315c75
#define public_6315c85 _public_6315c85
#define public_6315c8d _public_6315c8d
#define public_6315ca0 _public_6315ca0
#define public_6315cbe _public_6315cbe
#define public_6315cd2 _public_6315cd2
#define public_6315cea _public_6315cea
#define public_6315d0c _public_6315d0c
#define public_6315d29 _public_6315d29
#define public_6315d32 _public_6315d32
#define public_6315d43 _public_6315d43
#define public_6315d5a _public_6315d5a
#define public_6315d62 _public_6315d62
#define public_6315d68 _public_6315d68
#define public_6315d87 _public_6315d87
#define public_6315d9b _public_6315d9b
#define public_6315da1 _public_6315da1

PROC_DECLARE(0x6315b90, internal_6315b90, public_6315b90);
extern "C" NAKED register_t __cdecl internal_6315b90()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, ecx
        cmp ebp, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_6315da1
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        jne public_6315bb2
        xor edx, edx
        jmp public_6315bba
        public_6315bb2 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, esi
        sar edx, 4
        public_6315bba : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_6315bc5
        xor eax, eax
        jmp public_6315bcd
        public_6315bc5 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 4
        public_6315bcd : nop
        cmp edx, eax
        ja public_6315c55
        mov ebx, dword ptr ds : [ebx+8]
        cmp esi, ebx
        mov edi, ecx
        je public_6315bfd
        mov edi, edi
        public_6315be0 : nop
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push esi
        mov ecx, edi
        call dword ptr ds : [public_63991a8]
        add esi, 0x10
        add edi, 0x10
        cmp esi, ebx
        jne public_6315be0
        public_6315bfd : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp edi, ebx
        mov esi, edi
        je public_6315c16
        public_6315c06 : nop
        push 0
        mov ecx, esi
        call public_631a680
        add esi, 0x10
        cmp esi, ebx
        jne public_6315c06
        public_6315c16 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6315c38
        mov ecx, dword ptr ss : [ebp+4]
        xor eax, eax
        shl eax, 4
        pop edi
        add eax, ecx
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6315c38 : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp+4]
        sar eax, 4
        shl eax, 4
        pop edi
        add eax, ecx
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6315c55 : nop
        test esi, esi
        jne public_6315c5d
        xor edx, edx
        jmp public_6315c65
        public_6315c5d : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, esi
        sar edx, 4
        public_6315c65 : nop
        test ecx, ecx
        jne public_6315c6d
        xor eax, eax
        jmp public_6315c75
        public_6315c6d : nop
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 4
        public_6315c75 : nop
        cmp edx, eax
        ja public_6315d29
        test ecx, ecx
        jne public_6315c85
        xor eax, eax
        jmp public_6315c8d
        public_6315c85 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 4
        public_6315c8d : nop
        shl eax, 4
        add eax, esi
        mov edi, eax
        cmp esi, edi
        mov ebx, ecx
        je public_6315cbe
        lea ebx, ds:[ebx]
        public_6315ca0 : nop
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_63991a8]
        add esi, 0x10
        add ebx, 0x10
        cmp esi, edi
        jne public_6315ca0
        public_6315cbe : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ds : [ecx+8]
        cmp edi, ebp
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+8]
        mov esi, edi
        je public_6315cea
        public_6315cd2 : nop
        push esi
        push ebx
        call public_62baf00
        add esi, 0x10
        add esp, 8
        add ebx, 0x10
        cmp esi, ebp
        jne public_6315cd2
        mov edx, dword ptr ss : [esp+0x10]
        public_6315cea : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6315d0c
        mov ecx, dword ptr ds : [edx+4]
        xor eax, eax
        pop edi
        shl eax, 4
        pop esi
        add eax, ecx
        pop ebp
        mov dword ptr ds : [edx+8], eax
        mov eax, edx
        pop ebx
        pop ecx
        ret 4
        public_6315d0c : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [edx+4]
        sar eax, 4
        pop edi
        shl eax, 4
        pop esi
        add eax, ecx
        pop ebp
        mov dword ptr ds : [edx+8], eax
        mov eax, edx
        pop ebx
        pop ecx
        ret 4
        public_6315d29 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov esi, ecx
        cmp esi, edi
        je public_6315d43
        public_6315d32 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_63991b8]
        add esi, 0x10
        cmp esi, edi
        jne public_6315d32
        public_6315d43 : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        test ecx, ecx
        jne public_6315d5a
        xor eax, eax
        jmp public_6315d62
        public_6315d5a : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 4
        public_6315d62 : nop
        test eax, eax
        jge public_6315d68
        xor eax, eax
        public_6315d68 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [ebx+8]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+4]
        add esp, 4
        cmp esi, ebx
        je public_6315d9b
        public_6315d87 : nop
        push esi
        push edi
        call public_62baf00
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebx
        jne public_6315d87
        public_6315d9b : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        public_6315da1 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6315b90)
    }
}

#undef public_6315bb2
#undef public_6315bba
#undef public_6315bc5
#undef public_6315bcd
#undef public_6315be0
#undef public_6315bfd
#undef public_6315c06
#undef public_6315c16
#undef public_6315c38
#undef public_6315c55
#undef public_6315c5d
#undef public_6315c65
#undef public_6315c6d
#undef public_6315c75
#undef public_6315c85
#undef public_6315c8d
#undef public_6315ca0
#undef public_6315cbe
#undef public_6315cd2
#undef public_6315cea
#undef public_6315d0c
#undef public_6315d29
#undef public_6315d32
#undef public_6315d43
#undef public_6315d5a
#undef public_6315d62
#undef public_6315d68
#undef public_6315d87
#undef public_6315d9b
#undef public_6315da1
