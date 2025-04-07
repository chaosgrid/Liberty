#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad5e70);

#define public_6ad5e94 _public_6ad5e94
#define public_6ad5eb0 _public_6ad5eb0
#define public_6ad5eb5 _public_6ad5eb5
#define public_6ad5ec2 _public_6ad5ec2
#define public_6ad5eca _public_6ad5eca
#define public_6ad5ed2 _public_6ad5ed2
#define public_6ad5ee4 _public_6ad5ee4
#define public_6ad5eeb _public_6ad5eeb
#define public_6ad5eee _public_6ad5eee
#define public_6ad5ef3 _public_6ad5ef3
#define public_6ad5ef9 _public_6ad5ef9
#define public_6ad5f01 _public_6ad5f01
#define public_6ad5f37 _public_6ad5f37
#define public_6ad5f41 _public_6ad5f41
#define public_6ad5f4b _public_6ad5f4b
#define public_6ad5f4f _public_6ad5f4f
#define public_6ad5f57 _public_6ad5f57
#define public_6ad5f59 _public_6ad5f59
#define public_6ad5f61 _public_6ad5f61
#define public_6ad5f66 _public_6ad5f66

PROC_DECLARE(0x6ad5e70, internal_6ad5e70, public_6ad5e70);
extern "C" NAKED register_t __cdecl internal_6ad5e70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        test ecx, ecx
        je public_6ad5ef3
        push esi
        push ebx
        mov ebx, ecx
        mov esi, dword ptr ss : [esp+0x14]
        test esi, 3
        mov edi, dword ptr ss : [esp+0x10]
        jne public_6ad5e94
        shr ecx, 2
        jne public_6ad5f01
        jmp public_6ad5eb5
        public_6ad5e94 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [edi], al
        inc edi
        dec ecx
        je public_6ad5ec2
        test al, al
        je public_6ad5eca
        test esi, 3
        jne public_6ad5e94
        mov ebx, ecx
        shr ecx, 2
        jne public_6ad5f01
        public_6ad5eb0 : nop
        and ebx, 3
        je public_6ad5ec2
        public_6ad5eb5 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [edi], al
        inc edi
        test al, al
        je public_6ad5eee
        dec ebx
        jne public_6ad5eb5
        public_6ad5ec2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        pop esi
        pop edi
        ret 
        public_6ad5eca : nop
        test edi, 3
        je public_6ad5ee4
        public_6ad5ed2 : nop
        mov byte ptr ds : [edi], al
        inc edi
        dec ecx
        je public_6ad5f66
        test edi, 3
        jne public_6ad5ed2
        public_6ad5ee4 : nop
        mov ebx, ecx
        shr ecx, 2
        jne public_6ad5f57
        public_6ad5eeb : nop
        mov byte ptr ds : [edi], al
        inc edi
        public_6ad5eee : nop
        dec ebx
        jne public_6ad5eeb
        pop ebx
        pop esi
        public_6ad5ef3 : nop
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_6ad5ef9 : nop
        mov dword ptr ds : [edi], edx
        add edi, 4
        dec ecx
        je public_6ad5eb0
        public_6ad5f01 : nop
        mov edx, 0x7EFEFEFF
        mov eax, dword ptr ds : [esi]
        add edx, eax
        xor eax, 0xFFFFFFFF
        xor eax, edx
        mov edx, dword ptr ds : [esi]
        add esi, 4
        test eax, 0x81010100
        je public_6ad5ef9
        test dl, dl
        je public_6ad5f4b
        test dh, dh
        je public_6ad5f41
        test edx, 0xFF0000
        je public_6ad5f37
        test edx, 0xFF000000
        jne public_6ad5ef9
        mov dword ptr ds : [edi], edx
        jmp public_6ad5f4f
        public_6ad5f37 : nop
        and edx, 0xFFFF
        mov dword ptr ds : [edi], edx
        jmp public_6ad5f4f
        public_6ad5f41 : nop
        and edx, 0xFF
        mov dword ptr ds : [edi], edx
        jmp public_6ad5f4f
        public_6ad5f4b : nop
        xor edx, edx
        mov dword ptr ds : [edi], edx
        public_6ad5f4f : nop
        add edi, 4
        xor eax, eax
        dec ecx
        je public_6ad5f61
        public_6ad5f57 : nop
        xor eax, eax
        public_6ad5f59 : nop
        mov dword ptr ds : [edi], eax
        add edi, 4
        dec ecx
        jne public_6ad5f59
        public_6ad5f61 : nop
        and ebx, 3
        jne public_6ad5eeb
        public_6ad5f66 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebx
        pop esi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ad5e70)
    }
}

#undef public_6ad5e94
#undef public_6ad5eb0
#undef public_6ad5eb5
#undef public_6ad5ec2
#undef public_6ad5eca
#undef public_6ad5ed2
#undef public_6ad5ee4
#undef public_6ad5eeb
#undef public_6ad5eee
#undef public_6ad5ef3
#undef public_6ad5ef9
#undef public_6ad5f01
#undef public_6ad5f37
#undef public_6ad5f41
#undef public_6ad5f4b
#undef public_6ad5f4f
#undef public_6ad5f57
#undef public_6ad5f59
#undef public_6ad5f61
#undef public_6ad5f66
