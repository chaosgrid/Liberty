#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd020);

#define public_65dd02d _public_65dd02d
#define public_65dd03c _public_65dd03c
#define public_65dd06f _public_65dd06f
#define public_65dd074 _public_65dd074
#define public_65dd079 _public_65dd079
#define public_65dd07e _public_65dd07e
#define public_65dd081 _public_65dd081
#define public_65dd08d _public_65dd08d
#define public_65dd0a1 _public_65dd0a1
#define public_65dd0a6 _public_65dd0a6
#define public_65dd0da _public_65dd0da
#define public_65dd0e2 _public_65dd0e2
#define public_65dd0ef _public_65dd0ef
#define public_65dd0f8 _public_65dd0f8

PROC_DECLARE(0x65dd020, internal_65dd020, public_65dd020);
extern "C" NAKED register_t __cdecl internal_65dd020()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push edi
        test ecx, 3
        je public_65dd03c
        public_65dd02d : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        test al, al
        je public_65dd06f
        test ecx, 3
        jne public_65dd02d
        public_65dd03c : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, 0x7EFEFEFF
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        add ecx, 4
        test eax, 0x81010100
        je public_65dd03c
        mov eax, dword ptr ds : [ecx-4]
        test al, al
        je public_65dd07e
        test ah, ah
        je public_65dd079
        test eax, 0xFF0000
        je public_65dd074
        test eax, 0xFF000000
        je public_65dd06f
        jmp public_65dd03c
        public_65dd06f : nop
        lea edi, ds:[ecx-1]
        jmp public_65dd081
        public_65dd074 : nop
        lea edi, ds:[ecx-2]
        jmp public_65dd081
        public_65dd079 : nop
        lea edi, ds:[ecx-3]
        jmp public_65dd081
        public_65dd07e : nop
        lea edi, ds:[ecx-4]
        public_65dd081 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, 3
        je public_65dd0a6
        public_65dd08d : nop
        mov dl, byte ptr ds : [ecx]
        inc ecx
        test dl, dl
        je public_65dd0f8
        mov byte ptr ds : [edi], dl
        inc edi
        test ecx, 3
        jne public_65dd08d
        jmp public_65dd0a6
        public_65dd0a1 : nop
        mov dword ptr ds : [edi], edx
        add edi, 4
        public_65dd0a6 : nop
        mov edx, 0x7EFEFEFF
        mov eax, dword ptr ds : [ecx]
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        test eax, 0x81010100
        je public_65dd0a1
        test dl, dl
        je public_65dd0f8
        test dh, dh
        je public_65dd0ef
        test edx, 0xFF0000
        je public_65dd0e2
        test edx, 0xFF000000
        je public_65dd0da
        jmp public_65dd0a1
        public_65dd0da : nop
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_65dd0e2 : nop
        mov word ptr ds : [edi], dx
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [edi+2], 0
        pop edi
        ret 
        public_65dd0ef : nop
        mov word ptr ds : [edi], dx
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_65dd0f8 : nop
        mov byte ptr ds : [edi], dl
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        UNREACHABLE_TRAP(0x65dd020)
    }
}

#undef public_65dd02d
#undef public_65dd03c
#undef public_65dd06f
#undef public_65dd074
#undef public_65dd079
#undef public_65dd07e
#undef public_65dd081
#undef public_65dd08d
#undef public_65dd0a1
#undef public_65dd0a6
#undef public_65dd0da
#undef public_65dd0e2
#undef public_65dd0ef
#undef public_65dd0f8
