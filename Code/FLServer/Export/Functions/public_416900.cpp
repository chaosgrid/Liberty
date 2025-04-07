#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416900);
CLANG_FORWARD_PROC_SYMBOL(public_417070);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_416924 _public_416924
#define public_416942 _public_416942
#define public_41694d _public_41694d
#define public_416956 _public_416956
#define public_416961 _public_416961
#define public_41697d _public_41697d
#define public_416994 _public_416994
#define public_4169a1 _public_4169a1
#define public_4169ac _public_4169ac
#define public_4169af _public_4169af
#define public_4169c7 _public_4169c7
#define public_4169d2 _public_4169d2
#define public_4169d5 _public_4169d5
#define public_4169ea _public_4169ea
#define public_4169f5 _public_4169f5
#define public_416a00 _public_416a00
#define public_416a03 _public_416a03
#define public_416a17 _public_416a17
#define public_416a23 _public_416a23
#define public_416a2f _public_416a2f
#define public_416a32 _public_416a32
#define public_416a50 _public_416a50
#define public_416a8f _public_416a8f
#define public_416aa2 _public_416aa2
#define public_416aad _public_416aad
#define public_416ab0 _public_416ab0
#define public_416abb _public_416abb
#define public_416ace _public_416ace
#define public_416af5 _public_416af5
#define public_416b0f _public_416b0f
#define public_416b35 _public_416b35
#define public_416b48 _public_416b48
#define public_416b55 _public_416b55
#define public_416b57 _public_416b57
#define public_416b62 _public_416b62
#define public_416b79 _public_416b79
#define public_416b91 _public_416b91
#define public_416b9e _public_416b9e
#define public_416ba0 _public_416ba0
#define public_416bac _public_416bac
#define public_416bd6 _public_416bd6
#define public_416bee _public_416bee
#define public_416bfe _public_416bfe
#define public_416c08 _public_416c08
#define public_416c2b _public_416c2b
#define public_416c3e _public_416c3e
#define public_416c49 _public_416c49
#define public_416c4c _public_416c4c
#define public_416c56 _public_416c56
#define public_416c7f _public_416c7f
#define public_416c92 _public_416c92
#define public_416c9f _public_416c9f
#define public_416ca1 _public_416ca1
#define public_416ca4 _public_416ca4
#define public_416ca7 _public_416ca7
#define public_416caa _public_416caa

PROC_DECLARE(0x416900, internal_416900, public_416900);
extern "C" NAKED register_t __cdecl internal_416900()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_417070
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_416942
        mov eax, dword ptr ds : [esi+8]
        public_416924 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_4169c7
        mov dword ptr ds : [ecx+4], eax
        jmp public_4169d5
        public_416942 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_41694d
        mov eax, edx
        jmp public_416924
        public_41694d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_416961
        public_416956 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_416956
        public_416961 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_416924
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_41697d
        mov dword ptr ds : [eax+4], ecx
        jmp public_416994
        public_41697d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_416994 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_4169a1
        mov dword ptr ds : [edx+4], ecx
        jmp public_4169af
        public_4169a1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_4169ac
        mov dword ptr ds : [edx], ecx
        jmp public_4169af
        public_4169ac : nop
        mov dword ptr ds : [edx+8], ecx
        public_4169af : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_416a32
        public_4169c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_4169d2
        mov dword ptr ds : [ecx], eax
        jmp public_4169d5
        public_4169d2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4169d5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_416a03
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4169ea
        mov edx, dword ptr ds : [esi+4]
        jmp public_416a00
        public_4169ea : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_416a00
        public_4169f5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_4169f5
        public_416a00 : nop
        mov dword ptr ss : [ebp], edx
        public_416a03 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_416a32
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_416a17
        mov edx, dword ptr ds : [esi+4]
        jmp public_416a2f
        public_416a17 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_416a2f
        public_416a23 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_416a23
        public_416a2f : nop
        mov dword ptr ss : [ebp+8], edx
        public_416a32 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_416caa
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_416ca7
        nop 
        public_416a50 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_416ca7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_416b0f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_416abb
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_416a8f
        mov dword ptr ds : [esi+4], ecx
        public_416a8f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_416aa2
        mov dword ptr ds : [esi+4], edx
        jmp public_416ab0
        public_416aa2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_416aad
        mov dword ptr ds : [esi], edx
        jmp public_416ab0
        public_416aad : nop
        mov dword ptr ds : [esi+8], edx
        public_416ab0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_416abb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_416ace
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_416b79
        public_416ace : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_416bac
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_416af5
        mov dword ptr ds : [esi+4], ecx
        public_416af5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_416b91
        mov dword ptr ds : [esi+4], edx
        jmp public_416ba0
        public_416b0f : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_416b62
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_416b35
        mov dword ptr ds : [esi+4], ecx
        public_416b35 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_416b48
        mov dword ptr ds : [esi+4], edx
        jmp public_416b57
        public_416b48 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_416b55
        mov dword ptr ds : [esi+8], edx
        jmp public_416b57
        public_416b55 : nop
        mov dword ptr ds : [esi], edx
        public_416b57 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_416b62 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_416c08
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_416c08
        public_416b79 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_416a50
        jmp public_416ca7
        public_416b91 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_416b9e
        mov dword ptr ds : [esi+8], edx
        jmp public_416ba0
        public_416b9e : nop
        mov dword ptr ds : [esi], edx
        public_416ba0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_416bac : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_416bd6
        mov dword ptr ds : [esi+4], ecx
        public_416bd6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_416bee
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_416ca4
        public_416bee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_416bfe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_416ca4
        public_416bfe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_416ca4
        public_416c08 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_416c56
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_416c2b
        mov dword ptr ds : [esi+4], ecx
        public_416c2b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_416c3e
        mov dword ptr ds : [esi+4], edx
        jmp public_416c4c
        public_416c3e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_416c49
        mov dword ptr ds : [esi], edx
        jmp public_416c4c
        public_416c49 : nop
        mov dword ptr ds : [esi+8], edx
        public_416c4c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_416c56 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_416c7f
        mov dword ptr ds : [esi+4], ecx
        public_416c7f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_416c92
        mov dword ptr ds : [esi+4], edx
        jmp public_416ca1
        public_416c92 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_416c9f
        mov dword ptr ds : [esi+8], edx
        jmp public_416ca1
        public_416c9f : nop
        mov dword ptr ds : [esi], edx
        public_416ca1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_416ca4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_416ca7 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_416caa : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_418978
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x416900)
    }
}

#undef public_416924
#undef public_416942
#undef public_41694d
#undef public_416956
#undef public_416961
#undef public_41697d
#undef public_416994
#undef public_4169a1
#undef public_4169ac
#undef public_4169af
#undef public_4169c7
#undef public_4169d2
#undef public_4169d5
#undef public_4169ea
#undef public_4169f5
#undef public_416a00
#undef public_416a03
#undef public_416a17
#undef public_416a23
#undef public_416a2f
#undef public_416a32
#undef public_416a50
#undef public_416a8f
#undef public_416aa2
#undef public_416aad
#undef public_416ab0
#undef public_416abb
#undef public_416ace
#undef public_416af5
#undef public_416b0f
#undef public_416b35
#undef public_416b48
#undef public_416b55
#undef public_416b57
#undef public_416b62
#undef public_416b79
#undef public_416b91
#undef public_416b9e
#undef public_416ba0
#undef public_416bac
#undef public_416bd6
#undef public_416bee
#undef public_416bfe
#undef public_416c08
#undef public_416c2b
#undef public_416c3e
#undef public_416c49
#undef public_416c4c
#undef public_416c56
#undef public_416c7f
#undef public_416c92
#undef public_416c9f
#undef public_416ca1
#undef public_416ca4
#undef public_416ca7
#undef public_416caa
