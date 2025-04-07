#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a298);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a44e);

#define public_6b6a2ae _public_6b6a2ae
#define public_6b6a2d6 _public_6b6a2d6
#define public_6b6a2da _public_6b6a2da
#define public_6b6a300 _public_6b6a300
#define public_6b6a317 _public_6b6a317
#define public_6b6a328 _public_6b6a328
#define public_6b6a32d _public_6b6a32d
#define public_6b6a33d _public_6b6a33d
#define public_6b6a340 _public_6b6a340

PROC_DECLARE(0x6b6a298, internal_6b6a298, public_6b6a298);
extern "C" NAKED register_t __cdecl internal_6b6a298()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6b6a2ae
        cmp dword ptr ds : [public_6b7463c], eax
        jle public_6b6a2d6
        dec dword ptr ds : [public_6b7463c]
        public_6b6a2ae : nop
        mov ecx, dword ptr ds : [public_6b6b1b0]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6b74640], ecx
        jne public_6b6a300
        push 0x80
        call dword ptr ds : [public_6b6b1d8]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6b74648], eax
        jne public_6b6a2da
        public_6b6a2d6 : nop
        xor eax, eax
        jmp public_6b6a340
        public_6b6a2da : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6b74648]
/*FIXUP push offset public_6b736f4 @0x6b6a2e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b736f4
/*FIXUP push offset public_6b73000 @0x6b6a2e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b73000
        mov dword ptr ds : [public_6b74644], eax
        call public_6b6a44e
        inc dword ptr ds : [public_6b7463c]
        pop ecx
        pop ecx
        jmp public_6b6a33d
        public_6b6a300 : nop
        test eax, eax
        jne public_6b6a33d
        mov eax, dword ptr ds : [public_6b74648]
        test eax, eax
        je public_6b6a33d
        mov ecx, dword ptr ds : [public_6b74644]
        push esi
        lea esi, ds:[ecx-4]
        public_6b6a317 : nop
        cmp esi, eax
        jb public_6b6a32d
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6b6a328
        call ecx
        mov eax, dword ptr ds : [public_6b74648]
        public_6b6a328 : nop
        sub esi, 4
        jmp public_6b6a317
        public_6b6a32d : nop
        push eax
        call dword ptr ds : [public_6b6b1dc]
        and dword ptr ds : [public_6b74648], 0
        pop ecx
        pop esi
        public_6b6a33d : nop
        push 1
        pop eax
        public_6b6a340 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6b6a298)
    }
}

#undef public_6b6a2ae
#undef public_6b6a2d6
#undef public_6b6a2da
#undef public_6b6a300
#undef public_6b6a317
#undef public_6b6a328
#undef public_6b6a32d
#undef public_6b6a33d
#undef public_6b6a340
