#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a9950);

#define public_5629ac _public_5629ac
#define public_5629b3 _public_5629b3
#define public_5629d1 _public_5629d1
#define public_5629e8 _public_5629e8
#define public_5629ef _public_5629ef
#define public_562a08 _public_562a08
#define public_562a21 _public_562a21
#define public_562a37 _public_562a37

PROC_DECLARE(0x562990, internal_562990, public_562990);
extern "C" NAKED register_t __cdecl internal_562990()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+4]
        test al, al
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_5629b3
        mov eax, dword ptr ds : [edi+0x2C]
        cmp eax, dword ptr ds : [esi+0x10]
        ja public_5629ac
        cmp eax, dword ptr ds : [esi+0xC]
        jae public_5629b3
        public_5629ac : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        public_5629b3 : nop
        mov al, byte ptr ds : [esi+5]
        test al, al
        je public_5629d1
        push edi
        mov ecx, offset public_67e7b8
        call public_5a9950
        cmp al, byte ptr ds : [esi+0x14]
        je public_5629d1
        pop edi
        xor al, al
        pop esi
        ret 4
        public_5629d1 : nop
        mov al, byte ptr ds : [esi+6]
        test al, al
        je public_5629ef
        mov eax, dword ptr ds : [edi+0x8C]
        cmp eax, dword ptr ds : [esi+0x1C]
        ja public_5629e8
        cmp eax, dword ptr ds : [esi+0x18]
        jae public_5629ef
        public_5629e8 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        public_5629ef : nop
        mov al, byte ptr ds : [esi+7]
        test al, al
        je public_562a08
        mov al, byte ptr ds : [edi+0x95]
        cmp al, byte ptr ds : [esi+0x20]
        je public_562a08
        pop edi
        xor al, al
        pop esi
        ret 4
        public_562a08 : nop
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_562a21
        mov cl, byte ptr ds : [edi+0x94]
        cmp cl, byte ptr ds : [esi+0x21]
        je public_562a21
        pop edi
        xor al, al
        pop esi
        ret 4
        public_562a21 : nop
        mov al, byte ptr ds : [esi+9]
        test al, al
        je public_562a37
        mov dl, byte ptr ds : [edi+0x3E]
        cmp dl, byte ptr ds : [esi+0x22]
        je public_562a37
        pop edi
        xor al, al
        pop esi
        ret 4
        public_562a37 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x562990)
    }
}

#undef public_5629ac
#undef public_5629b3
#undef public_5629d1
#undef public_5629e8
#undef public_5629ef
#undef public_562a08
#undef public_562a21
#undef public_562a37
