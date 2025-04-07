#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4da10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf169);

#define public_6f4d117 _public_6f4d117
#define public_6f4d120 _public_6f4d120
#define public_6f4d140 _public_6f4d140
#define public_6f4d14d _public_6f4d14d
#define public_6f4d155 _public_6f4d155
#define public_6f4d163 _public_6f4d163
#define public_6f4d16a _public_6f4d16a
#define public_6f4d16e _public_6f4d16e
#define public_6f4d18d _public_6f4d18d
#define public_6f4d1bb _public_6f4d1bb
#define public_6f4d1c7 _public_6f4d1c7
#define public_6f4d1dc _public_6f4d1dc
#define public_6f4d1e8 _public_6f4d1e8

PROC_DECLARE(0x6f4d090, internal_6f4d090, public_6f4d090);
extern "C" NAKED register_t __cdecl internal_6f4d090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf169 @0x6f4d092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf169
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        push ebx
        push esi
        mov esi, ecx
        push 0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x10], al
        call dword ptr ds : [public_6fb32c8]
        mov edx, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [public_6fb3528]
        add esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ds:[esi+0x1E4]
        call public_6f4da10
        mov esi, dword ptr ds : [esi+0x1E8]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, esi
        jne public_6f4d117
        push 1
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call dword ptr ds : [public_6fb32c8]
        jmp public_6f4d1e8
        public_6f4d117 : nop
        mov edx, dword ptr ss : [esp+0x30]
        nop 
        lea esp, ss:[esp]
        public_6f4d120 : nop
        cmp dword ptr ds : [eax+0x1C], edx
        je public_6f4d18d
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_6f4d14d
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_6f4d16a
        lea ebx, ds:[ebx]
        public_6f4d140 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f4d140
        jmp public_6f4d16a
        public_6f4d14d : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f4d163
        public_6f4d155 : nop
        mov eax, ecx
        mov dword ptr ss : [esp+8], eax
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6f4d155
        public_6f4d163 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6f4d16e
        mov eax, ecx
        public_6f4d16a : nop
        mov dword ptr ss : [esp+8], eax
        public_6f4d16e : nop
        cmp eax, esi
        jne public_6f4d120
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6f4d1e8
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f4d1dc
        cmp cl, 0xFF
        je public_6f4d1dc
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6f4d1e8
        public_6f4d18d : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6f4d1c7
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f4d1bb
        cmp cl, 0xFF
        je public_6f4d1bb
        dec cl
        pop esi
        mov byte ptr ds : [eax-1], cl
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        public_6f4d1bb : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4d1c7 : nop
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        public_6f4d1dc : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f4d1e8 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6f4d090)
    }
}

#undef public_6f4d117
#undef public_6f4d120
#undef public_6f4d140
#undef public_6f4d14d
#undef public_6f4d155
#undef public_6f4d163
#undef public_6f4d16a
#undef public_6f4d16e
#undef public_6f4d18d
#undef public_6f4d1bb
#undef public_6f4d1c7
#undef public_6f4d1dc
#undef public_6f4d1e8
