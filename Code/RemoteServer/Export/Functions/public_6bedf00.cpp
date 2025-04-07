#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bedf00);

#define public_6bedf12 _public_6bedf12
#define public_6bedf2d _public_6bedf2d
#define public_6bedf31 _public_6bedf31
#define public_6bedf36 _public_6bedf36

PROC_DECLARE(0x6bedf00, internal_6bedf00, public_6bedf00);
extern "C" NAKED register_t __cdecl internal_6bedf00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6bedf36
        public_6bedf12 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call dword ptr ds : [public_6c0b188]
        add esp, 8
        test al, al
        je public_6bedf2d
        mov esi, dword ptr ds : [esi+8]
        jmp public_6bedf31
        public_6bedf2d : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_6bedf31 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6bedf12
        public_6bedf36 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6bedf00)
    }
}

#undef public_6bedf12
#undef public_6bedf2d
#undef public_6bedf31
#undef public_6bedf36
