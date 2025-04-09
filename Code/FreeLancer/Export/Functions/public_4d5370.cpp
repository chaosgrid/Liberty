#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);

#define public_4d537e _public_4d537e
#define public_4d538a _public_4d538a
#define public_4d53d7 _public_4d53d7
#define public_4d53db _public_4d53db
#define public_4d53ed _public_4d53ed
#define public_4d5403 _public_4d5403

PROC_DECLARE(0x4d5370, internal_4d5370, public_4d5370);
extern "C" NAKED register_t __cdecl internal_4d5370()
{
    __asm
    {
        call public_45a740
        test al, al
        je public_4d537e
        xor al, al
        ret 4
        public_4d537e : nop
        cmp dword ptr ss : [esp+4], 0x6D
        je public_4d538a
        xor al, al
        ret 4
        public_4d538a : nop
        mov eax, dword ptr ds : [public_674aa0]
        mov cl, byte ptr ds : [eax+0x4D0]
        test cl, cl
        mov edx, dword ptr ds : [public_674b04]
        jne public_4d53db
        push ebx
        mov bl, byte ptr ds : [edx+0x4D0]
        test bl, bl
        pop ebx
        jne public_4d53d7
        lea ecx, ds:[eax+0x384]
        mov eax, dword ptr ds : [ecx]
        push 0x6D
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_674b04]
        mov edx, dword ptr ds : [ecx+0x384]
        add ecx, 0x384
        push 0x6D
        call dword ptr ds : [edx]
        call public_45a460
        mov al, 1
        ret 4
        public_4d53d7 : nop
        test cl, cl
        je public_4d53ed
        public_4d53db : nop
        lea ecx, ds:[eax+0x384]
        mov eax, dword ptr ds : [ecx]
        push 0x6D
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_674b04]
        public_4d53ed : nop
        mov al, byte ptr ds : [edx+0x4D0]
        test al, al
        je public_4d5403
        lea ecx, ds:[edx+0x384]
        mov edx, dword ptr ds : [ecx]
        push 0x6D
        call dword ptr ds : [edx]
        public_4d5403 : nop
        call public_45a460
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x4d5370)
    }
}

#undef public_4d537e
#undef public_4d538a
#undef public_4d53d7
#undef public_4d53db
#undef public_4d53ed
#undef public_4d5403
