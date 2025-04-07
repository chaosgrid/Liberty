#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdaad0);
CLANG_FORWARD_PROC_SYMBOL(public_6bdb1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a43e);

#define public_6bdab10 _public_6bdab10
#define public_6bdab27 _public_6bdab27
#define public_6bdab30 _public_6bdab30
#define public_6bdab37 _public_6bdab37
#define public_6bdab44 _public_6bdab44
#define public_6bdab59 _public_6bdab59
#define public_6bdab7e _public_6bdab7e
#define public_6bdab8e _public_6bdab8e

PROC_DECLARE(0x6bdaad0, internal_6bdaad0, public_6bdaad0);
extern "C" NAKED register_t __cdecl internal_6bdaad0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a43e @0x6bdaad2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a43e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], ebp
        mov dword ptr ss : [ebp], offset public_6c0bafc
        mov eax, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], 2
        je public_6bdab37
        lea esp, ss:[esp]
        public_6bdab10 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_6bdab30
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_6bdab27
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdab27 : nop
        push edi
        call public_6c09aaa
        add esp, 4
        public_6bdab30 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x40]
        jne public_6bdab10
        public_6bdab37 : nop
        lea edi, ss:[ebp+0x3C]
        push ebx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6bdab59
        public_6bdab44 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6bdb1c0
        cmp esi, ebx
        jne public_6bdab44
        public_6bdab59 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6c09aaa
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ss : [ebp+0x34]
        add esp, 4
        cmp eax, esi
        pop ebx
        je public_6bdab7e
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdab7e : nop
        mov eax, dword ptr ss : [ebp+0x2C]
        cmp eax, esi
        je public_6bdab8e
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bdab8e : nop
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6bebe40
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6bdaad0)
    }
}

#undef public_6bdab10
#undef public_6bdab27
#undef public_6bdab30
#undef public_6bdab37
#undef public_6bdab44
#undef public_6bdab59
#undef public_6bdab7e
#undef public_6bdab8e
