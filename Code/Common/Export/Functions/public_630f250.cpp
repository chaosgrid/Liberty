#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630f250);

#define public_630f273 _public_630f273
#define public_630f291 _public_630f291
#define public_630f292 _public_630f292
#define public_630f2a4 _public_630f2a4
#define public_630f2b2 _public_630f2b2
#define public_630f2b5 _public_630f2b5

PROC_DECLARE(0x630f250, internal_630f250, public_630f250);
extern "C" NAKED register_t __cdecl internal_630f250()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x404]
        push edi
        mov edi, dword ptr ds : [esi+0x400]
        sub edi, eax
        mov eax, 0
        je public_630f292
        mov dl, byte ptr ss : [esp+0x14]
        push ebx
        public_630f273 : nop
        mov ebx, dword ptr ds : [esi+0x404]
        lea ecx, ds:[eax+esi]
        mov cl, byte ptr ds : [ecx+ebx]
        cmp cl, dl
        je public_630f291
        cmp cl, byte ptr ss : [esp+0x1C]
        je public_630f291
        mov byte ptr ds : [eax+ebp], cl
        inc eax
        cmp eax, edi
        jb public_630f273
        public_630f291 : nop
        pop ebx
        public_630f292 : nop
        mov edx, dword ptr ds : [esi+0x404]
        add edx, eax
        test eax, eax
        mov dword ptr ds : [esi+0x404], edx
        jbe public_630f2b5
        public_630f2a4 : nop
        mov cl, byte ptr ds : [eax+ebp-1]
        cmp cl, 0x20
        je public_630f2b2
        cmp cl, 9
        jne public_630f2b5
        public_630f2b2 : nop
        dec eax
        jne public_630f2a4
        public_630f2b5 : nop
        pop edi
        pop esi
        mov byte ptr ds : [eax+ebp], 0
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x630f250)
    }
}

#undef public_630f273
#undef public_630f291
#undef public_630f292
#undef public_630f2a4
#undef public_630f2b2
#undef public_630f2b5
