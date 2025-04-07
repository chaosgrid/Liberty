#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68023d0);
CLANG_FORWARD_PROC_SYMBOL(public_6802580);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);

#define public_6802593 _public_6802593
#define public_68025a6 _public_68025a6
#define public_68025a8 _public_68025a8
#define public_68025b1 _public_68025b1
#define public_68025c0 _public_68025c0
#define public_68025f7 _public_68025f7
#define public_6802606 _public_6802606

PROC_DECLARE(0x6802580, internal_6802580, public_6802580);
extern "C" NAKED register_t __cdecl internal_6802580()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_6802593
        mov eax, dword ptr ds : [public_680e604]
        mov esi, dword ptr ds : [eax+0x58]
        jmp public_68025a8
        public_6802593 : nop
        cmp esi, dword ptr ds : [esi]
        jne public_68025a6
/*FIXUP push offset public_680d440 @0x6802597*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d440
        push 1
        call public_6805d80
        add esp, 8
        public_68025a6 : nop
        mov esi, dword ptr ds : [esi]
        public_68025a8 : nop
        test esi, esi
        je public_6802606
        mov eax, 0xFFFFFFFA
        public_68025b1 : nop
        cmp dword ptr ds : [esi+0x10], eax
        jne public_68025c0
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_68025b1
        mov eax, esi
        pop esi
        ret 
        public_68025c0 : nop
        test esi, esi
        je public_6802606
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], 0xFFFFFFFE
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+8], esi
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [eax+8]
        jb public_68025f7
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_68025f7 : nop
        add dword ptr ds : [eax], 0x10
        lea eax, ds:[esi+0x10]
        push eax
        call public_68023d0
        add esp, 4
        public_6802606 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802580)
    }
}

#undef public_6802593
#undef public_68025a6
#undef public_68025a8
#undef public_68025b1
#undef public_68025c0
#undef public_68025f7
#undef public_6802606
