#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dcc49);

#define public_65dcc7d _public_65dcc7d
#define public_65dcc86 _public_65dcc86
#define public_65dcc8e _public_65dcc8e
#define public_65dcc97 _public_65dcc97
#define public_65dcc9e _public_65dcc9e
#define public_65dccaa _public_65dccaa
#define public_65dccb3 _public_65dccb3
#define public_65dccc1 _public_65dccc1
#define public_65dcccd _public_65dcccd
#define public_65dccd4 _public_65dccd4
#define public_65dccd9 _public_65dccd9
#define public_65dcce1 _public_65dcce1
#define public_65dcce4 _public_65dcce4
#define public_65dccfc _public_65dccfc
#define public_65dcd05 _public_65dcd05
#define public_65dcd16 _public_65dcd16
#define public_65dcd1f _public_65dcd1f
#define public_65dcd26 _public_65dcd26
#define public_65dcd36 _public_65dcd36
#define public_65dcd3d _public_65dcd3d
#define public_65dcd4e _public_65dcd4e
#define public_65dcd57 _public_65dcd57
#define public_65dcd5c _public_65dcd5c
#define public_65dcd66 _public_65dcd66
#define public_65dcd68 _public_65dcd68

PROC_DECLARE(0x65dcc49, internal_65dcc49, public_65dcc49);
extern "C" NAKED register_t __cdecl internal_65dcc49()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+4]
        push edi
        mov edi, dword ptr ds : [ecx]
        lea ebx, ds:[ecx+0xF8]
        cmp esi, edx
        mov dword ptr ss : [ebp-4], edi
        mov eax, edi
        mov dword ptr ss : [ebp+8], ebx
        jb public_65dcc8e
        lea eax, ds:[edi+edx]
        mov byte ptr ds : [edi], dl
        cmp eax, ebx
        jae public_65dcc7d
        add dword ptr ds : [ecx], edx
        sub dword ptr ds : [ecx+4], edx
        jmp public_65dcc86
        public_65dcc7d : nop
        and dword ptr ds : [ecx+4], 0
        lea eax, ds:[ecx+8]
        mov dword ptr ds : [ecx], eax
        public_65dcc86 : nop
        lea eax, ds:[edi+8]
        jmp public_65dcd5c
        public_65dcc8e : nop
        add esi, edi
        cmp byte ptr ds : [esi], 0
        je public_65dcc97
        mov eax, esi
        public_65dcc97 : nop
        lea esi, ds:[eax+edx]
        cmp esi, ebx
        jae public_65dcce1
        public_65dcc9e : nop
        mov bl, byte ptr ds : [eax]
        test bl, bl
        jne public_65dccd4
        push 1
        lea ebx, ds:[eax+1]
        pop esi
        public_65dccaa : nop
        cmp byte ptr ds : [ebx], 0
        jne public_65dccb3
        inc ebx
        inc esi
        jmp public_65dccaa
        public_65dccb3 : nop
        cmp esi, edx
        jae public_65dcd05
        cmp eax, dword ptr ss : [ebp-4]
        jne public_65dccc1
        mov dword ptr ds : [ecx+4], esi
        jmp public_65dcccd
        public_65dccc1 : nop
        sub dword ptr ss : [ebp+0xC], esi
        cmp dword ptr ss : [ebp+0xC], edx
        jb public_65dcd66
        public_65dcccd : nop
        mov edi, dword ptr ss : [ebp-4]
        mov eax, ebx
        jmp public_65dccd9
        public_65dccd4 : nop
        movzx esi, bl
        add eax, esi
        public_65dccd9 : nop
        lea esi, ds:[eax+edx]
        cmp esi, dword ptr ss : [ebp+8]
        jb public_65dcc9e
        public_65dcce1 : nop
        lea esi, ds:[ecx+8]
        public_65dcce4 : nop
        cmp esi, edi
        jae public_65dcd66
        lea eax, ds:[esi+edx]
        cmp eax, dword ptr ss : [ebp+8]
        jae public_65dcd66
        mov al, byte ptr ds : [esi]
        test al, al
        jne public_65dcd36
        push 1
        lea ebx, ds:[esi+1]
        pop eax
        public_65dccfc : nop
        cmp byte ptr ds : [ebx], 0
        jne public_65dcd26
        inc ebx
        inc eax
        jmp public_65dccfc
        public_65dcd05 : nop
        lea ebx, ds:[eax+edx]
        cmp ebx, dword ptr ss : [ebp+8]
        jae public_65dcd16
        sub esi, edx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], esi
        jmp public_65dcd1f
        public_65dcd16 : nop
        and dword ptr ds : [ecx+4], 0
        lea esi, ds:[ecx+8]
        mov dword ptr ds : [ecx], esi
        public_65dcd1f : nop
        mov byte ptr ds : [eax], dl
        add eax, 8
        jmp public_65dcd5c
        public_65dcd26 : nop
        cmp eax, edx
        jae public_65dcd3d
        sub dword ptr ss : [ebp+0xC], eax
        cmp dword ptr ss : [ebp+0xC], edx
        jb public_65dcd66
        mov esi, ebx
        jmp public_65dcce4
        public_65dcd36 : nop
        movzx eax, al
        add esi, eax
        jmp public_65dcce4
        public_65dcd3d : nop
        lea ebx, ds:[esi+edx]
        cmp ebx, dword ptr ss : [ebp+8]
        jae public_65dcd4e
        sub eax, edx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], eax
        jmp public_65dcd57
        public_65dcd4e : nop
        and dword ptr ds : [ecx+4], 0
        lea eax, ds:[ecx+8]
        mov dword ptr ds : [ecx], eax
        public_65dcd57 : nop
        mov byte ptr ds : [esi], dl
        lea eax, ds:[esi+8]
        public_65dcd5c : nop
        imul ecx, 0xF
        shl eax, 4
        sub eax, ecx
        jmp public_65dcd68
        public_65dcd66 : nop
        xor eax, eax
        public_65dcd68 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dcc49)
    }
}

#undef public_65dcc7d
#undef public_65dcc86
#undef public_65dcc8e
#undef public_65dcc97
#undef public_65dcc9e
#undef public_65dccaa
#undef public_65dccb3
#undef public_65dccc1
#undef public_65dcccd
#undef public_65dccd4
#undef public_65dccd9
#undef public_65dcce1
#undef public_65dcce4
#undef public_65dccfc
#undef public_65dcd05
#undef public_65dcd16
#undef public_65dcd1f
#undef public_65dcd26
#undef public_65dcd36
#undef public_65dcd3d
#undef public_65dcd4e
#undef public_65dcd57
#undef public_65dcd5c
#undef public_65dcd66
#undef public_65dcd68
