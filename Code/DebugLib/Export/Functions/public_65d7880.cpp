#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7880);

#define public_65d78a4 _public_65d78a4
#define public_65d78c0 _public_65d78c0
#define public_65d78c5 _public_65d78c5
#define public_65d78d2 _public_65d78d2
#define public_65d78da _public_65d78da
#define public_65d78e2 _public_65d78e2
#define public_65d78f4 _public_65d78f4
#define public_65d78fb _public_65d78fb
#define public_65d78fe _public_65d78fe
#define public_65d7903 _public_65d7903
#define public_65d7909 _public_65d7909
#define public_65d7911 _public_65d7911
#define public_65d7947 _public_65d7947
#define public_65d7951 _public_65d7951
#define public_65d795b _public_65d795b
#define public_65d795f _public_65d795f
#define public_65d7967 _public_65d7967
#define public_65d7969 _public_65d7969
#define public_65d7971 _public_65d7971
#define public_65d7976 _public_65d7976

PROC_DECLARE(0x65d7880, internal_65d7880, public_65d7880);
extern "C" NAKED register_t __cdecl internal_65d7880()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        test ecx, ecx
        je public_65d7903
        push esi
        push ebx
        mov ebx, ecx
        mov esi, dword ptr ss : [esp+0x14]
        test esi, 3
        mov edi, dword ptr ss : [esp+0x10]
        jne public_65d78a4
        shr ecx, 2
        jne public_65d7911
        jmp public_65d78c5
        public_65d78a4 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [edi], al
        inc edi
        dec ecx
        je public_65d78d2
        test al, al
        je public_65d78da
        test esi, 3
        jne public_65d78a4
        mov ebx, ecx
        shr ecx, 2
        jne public_65d7911
        public_65d78c0 : nop
        and ebx, 3
        je public_65d78d2
        public_65d78c5 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [edi], al
        inc edi
        test al, al
        je public_65d78fe
        dec ebx
        jne public_65d78c5
        public_65d78d2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        pop esi
        pop edi
        ret 
        public_65d78da : nop
        test edi, 3
        je public_65d78f4
        public_65d78e2 : nop
        mov byte ptr ds : [edi], al
        inc edi
        dec ecx
        je public_65d7976
        test edi, 3
        jne public_65d78e2
        public_65d78f4 : nop
        mov ebx, ecx
        shr ecx, 2
        jne public_65d7967
        public_65d78fb : nop
        mov byte ptr ds : [edi], al
        inc edi
        public_65d78fe : nop
        dec ebx
        jne public_65d78fb
        pop ebx
        pop esi
        public_65d7903 : nop
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_65d7909 : nop
        mov dword ptr ds : [edi], edx
        add edi, 4
        dec ecx
        je public_65d78c0
        public_65d7911 : nop
        mov edx, 0x7EFEFEFF
        mov eax, dword ptr ds : [esi]
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        mov edx, dword ptr ds : [esi]
        add esi, 4
        test eax, 0x81010100
        je public_65d7909
        test dl, dl
        je public_65d795b
        test dh, dh
        je public_65d7951
        test edx, 0xFF0000
        je public_65d7947
        test edx, 0xFF000000
        jne public_65d7909
        mov dword ptr ds : [edi], edx
        jmp public_65d795f
        public_65d7947 : nop
        and edx, 0xFFFF
        mov dword ptr ds : [edi], edx
        jmp public_65d795f
        public_65d7951 : nop
        and edx, 0xFF
        mov dword ptr ds : [edi], edx
        jmp public_65d795f
        public_65d795b : nop
        xor edx, edx
        mov dword ptr ds : [edi], edx
        public_65d795f : nop
        add edi, 4
        xor eax, eax
        dec ecx
        je public_65d7971
        public_65d7967 : nop
        xor eax, eax
        public_65d7969 : nop
        mov dword ptr ds : [edi], eax
        add edi, 4
        dec ecx
        jne public_65d7969
        public_65d7971 : nop
        and ebx, 3
        jne public_65d78fb
        public_65d7976 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        pop esi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x65d7880)
    }
}

#undef public_65d78a4
#undef public_65d78c0
#undef public_65d78c5
#undef public_65d78d2
#undef public_65d78da
#undef public_65d78e2
#undef public_65d78f4
#undef public_65d78fb
#undef public_65d78fe
#undef public_65d7903
#undef public_65d7909
#undef public_65d7911
#undef public_65d7947
#undef public_65d7951
#undef public_65d795b
#undef public_65d795f
#undef public_65d7967
#undef public_65d7969
#undef public_65d7971
#undef public_65d7976
