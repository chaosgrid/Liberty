#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_637a890);
CLANG_FORWARD_PROC_SYMBOL(public_637aba0);
CLANG_FORWARD_PROC_SYMBOL(public_637b000);
CLANG_FORWARD_PROC_SYMBOL(public_637b570);
CLANG_FORWARD_PROC_SYMBOL(public_637b840);
CLANG_FORWARD_PROC_SYMBOL(public_637baf0);
CLANG_FORWARD_PROC_SYMBOL(public_637bf80);
CLANG_FORWARD_PROC_SYMBOL(public_637c2f0);
CLANG_FORWARD_PROC_SYMBOL(public_637c720);
CLANG_FORWARD_PROC_SYMBOL(public_637ce40);

#define public_637ce9e _public_637ce9e
#define public_637cf09 _public_637cf09
#define public_637cf25 _public_637cf25
#define public_637cf37 _public_637cf37

PROC_DECLARE(0x637ce40, internal_637ce40, public_637ce40);
extern "C" NAKED register_t __cdecl internal_637ce40()
{
    __asm
    {
        mov dword ptr ds : [public_658c710], 0
        call public_637a890
        call public_637aba0
        call public_637b000
        call public_637b570
        call public_637b840
        call public_637baf0
        call public_637bf80
        call public_637c2f0
        call public_637c720
        mov eax, dword ptr ds : [public_658c710]
        cmp eax, 0xCC
        jle public_637ce9e
        push 0xCC
        push eax
/*FIXUP push offset public_63f4eac @0x637ce89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f4eac
        call public_6356960
        add esp, 0xC
        push 1
        call dword ptr ds : [public_6399294]
        public_637ce9e : nop
        mov dword ptr ds : [public_658c6d0], 0
        mov dword ptr ds : [public_658c6d8], 0
        mov dword ptr ds : [public_658c6e8], 0x7FFFFFFF
        mov dword ptr ds : [public_658c6e0], 0x80000000
        mov dword ptr ds : [public_658c6f8], 0
        mov dword ptr ds : [public_658c6fc], 0
        mov dword ptr ds : [public_658c708], 0xFFFFFFFF
        mov dword ptr ds : [public_658c70c], 0x7FEFFFFF
        mov dword ptr ds : [public_658c700], 0xFFFFFFFF
        mov dword ptr ds : [public_658c704], 0xFFEFFFFF
        xor edx, edx
        mov ecx, offset public_658b9d8
        public_637cf09 : nop
        xor eax, eax
        mov al, byte ptr ds : [edx+public_658c540]
        cmp al, 5
        jle public_637cf25
        and eax, 0xFF
        fld qword ptr ds : [eax*8+public_658c6c8]
        fstp qword ptr ds : [ecx]
        jmp public_637cf37
        public_637cf25 : nop
        test al, al
        je public_637cf37
        and eax, 0xFF
        mov eax, dword ptr ds : [eax*8+public_658c6c8]
        mov dword ptr ds : [ecx], eax
        public_637cf37 : nop
        add ecx, 8
        inc edx
        cmp ecx, offset public_658bfe8
        jl public_637cf09
        ret 
        UNREACHABLE_TRAP(0x637ce40)
    }
}

#undef public_637ce9e
#undef public_637cf09
#undef public_637cf25
#undef public_637cf37
