#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6266bac _public_6266bac
#define public_6266bb3 _public_6266bb3
#define public_6266bbe _public_6266bbe
#define public_6266bc5 _public_6266bc5
#define public_6266bd0 _public_6266bd0
#define public_6266be0 _public_6266be0
#define public_6266bfa _public_6266bfa
#define public_6266c12 _public_6266c12
#define public_6266c1a _public_6266c1a
#define public_6266c21 _public_6266c21
#define public_6266c29 _public_6266c29
#define public_6266c30 _public_6266c30
#define public_6266c40 _public_6266c40
#define public_6266c47 _public_6266c47
#define public_6266c50 _public_6266c50
#define public_6266c60 _public_6266c60
#define public_6266c70 _public_6266c70
#define public_6266c7a _public_6266c7a
#define public_6266c84 _public_6266c84
#define public_6266c9e _public_6266c9e
#define public_6266cb6 _public_6266cb6
#define public_6266cca _public_6266cca
#define public_6266cd1 _public_6266cd1
#define public_6266cd7 _public_6266cd7
#define public_6266cf2 _public_6266cf2
#define public_6266cfc _public_6266cfc
#define public_6266d06 _public_6266d06
#define public_6266d0c _public_6266d0c

PROC_DECLARE(0x6266b90, internal_6266b90, public_6266b90);
extern "C" NAKED register_t __cdecl internal_6266b90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        cmp ebx, esi
        push edi
        je public_6266d0c
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6266bac
        xor edi, edi
        jmp public_6266bb3
        public_6266bac : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6266bb3 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6266bbe
        xor ecx, ecx
        jmp public_6266bc5
        public_6266bbe : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 1
        public_6266bc5 : nop
        cmp edi, ecx
        ja public_6266c12
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6266be0
        public_6266bd0 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6266bd0
        public_6266be0 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6266bfa
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*2]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6266bfa : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 1
        lea ecx, ds:[eax+esi*2]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6266c12 : nop
        test eax, eax
        jne public_6266c1a
        xor edi, edi
        jmp public_6266c21
        public_6266c1a : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 1
        public_6266c21 : nop
        test edx, edx
        jne public_6266c29
        xor ecx, ecx
        jmp public_6266c30
        public_6266c29 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 1
        public_6266c30 : nop
        cmp edi, ecx
        ja public_6266cb6
        test edx, edx
        jne public_6266c40
        xor ecx, ecx
        jmp public_6266c47
        public_6266c40 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 1
        public_6266c47 : nop
        lea ecx, ds:[eax+ecx*2]
        cmp eax, ecx
        je public_6266c60
        mov edi, edi
        public_6266c50 : nop
        mov di, word ptr ds : [eax]
        mov word ptr ds : [edx], di
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_6266c50
        public_6266c60 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp ecx, edi
        mov edx, dword ptr ds : [ebx+8]
        mov eax, ecx
        je public_6266c84
        lea esp, ss:[esp]
        public_6266c70 : nop
        test edx, edx
        je public_6266c7a
        mov cx, word ptr ds : [eax]
        mov word ptr ds : [edx], cx
        public_6266c7a : nop
        add eax, 2
        add edx, 2
        cmp eax, edi
        jne public_6266c70
        public_6266c84 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6266c9e
        mov edx, dword ptr ds : [ebx+4]
        xor esi, esi
        lea eax, ds:[edx+esi*2]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_6266c9e : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+4]
        sub esi, eax
        sar esi, 1
        lea eax, ds:[edx+esi*2]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_6266cb6 : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6266cca
        xor eax, eax
        jmp public_6266cd1
        public_6266cca : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        public_6266cd1 : nop
        test eax, eax
        jge public_6266cd7
        xor eax, eax
        public_6266cd7 : nop
        lea ecx, ds:[eax+eax]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6266d06
        public_6266cf2 : nop
        test ecx, ecx
        je public_6266cfc
        mov si, word ptr ds : [eax]
        mov word ptr ds : [ecx], si
        public_6266cfc : nop
        add eax, 2
        add ecx, 2
        cmp eax, edx
        jne public_6266cf2
        public_6266d06 : nop
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+8], ecx
        public_6266d0c : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6266b90)
    }
}

#undef public_6266bac
#undef public_6266bb3
#undef public_6266bbe
#undef public_6266bc5
#undef public_6266bd0
#undef public_6266be0
#undef public_6266bfa
#undef public_6266c12
#undef public_6266c1a
#undef public_6266c21
#undef public_6266c29
#undef public_6266c30
#undef public_6266c40
#undef public_6266c47
#undef public_6266c50
#undef public_6266c60
#undef public_6266c70
#undef public_6266c7a
#undef public_6266c84
#undef public_6266c9e
#undef public_6266cb6
#undef public_6266cca
#undef public_6266cd1
#undef public_6266cd7
#undef public_6266cf2
#undef public_6266cfc
#undef public_6266d06
#undef public_6266d0c
