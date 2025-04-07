#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda100);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bda120 _public_6bda120
#define public_6bda12c _public_6bda12c
#define public_6bda159 _public_6bda159
#define public_6bda165 _public_6bda165

PROC_DECLARE(0x6bda100, internal_6bda100, public_6bda100);
extern "C" NAKED register_t __cdecl internal_6bda100()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        cmp eax, ebx
        je public_6bda12c
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6bda120
        cmp cl, 0xFF
        je public_6bda120
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6bda12c
        public_6bda120 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bda12c : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6bda165
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6bda159
        cmp cl, 0xFF
        je public_6bda159
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        public_6bda159 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bda165 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6bda100)
    }
}

#undef public_6bda120
#undef public_6bda12c
#undef public_6bda159
#undef public_6bda165
