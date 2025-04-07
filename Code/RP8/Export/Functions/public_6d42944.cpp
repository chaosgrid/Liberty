#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42944);

#define public_6d42966 _public_6d42966
#define public_6d4296a _public_6d4296a
#define public_6d4297c _public_6d4297c
#define public_6d42990 _public_6d42990

PROC_DECLARE(0x6d42944, internal_6d42944, public_6d42944);
extern "C" NAKED register_t __cdecl internal_6d42944()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        movzx cx, byte ptr ss : [esp+8]
        or byte ptr ds : [eax+0x61], 0x80
        cmp dword ptr ss : [esp+0xC], 1
        mov word ptr ds : [eax+0x11E], cx
        jne public_6d42966
        or byte ptr ds : [eax+0x5C], 0x80
        jmp public_6d4296a
        public_6d42966 : nop
        and byte ptr ds : [eax+0x5C], 0x7F
        public_6d4296a : nop
        mov cl, byte ptr ds : [eax+0x116]
        cmp cl, 2
        jne public_6d4297c
        mov byte ptr ds : [eax+0x11B], 4
        public_6d4297c : nop
        test cl, cl
        jne public_6d42990
        cmp byte ptr ds : [eax+0x117], 8
        jb public_6d42990
        mov byte ptr ds : [eax+0x11B], 2
        public_6d42990 : nop
        ret 
        UNREACHABLE_TRAP(0x6d42944)
    }
}

#undef public_6d42966
#undef public_6d4296a
#undef public_6d4297c
#undef public_6d42990
