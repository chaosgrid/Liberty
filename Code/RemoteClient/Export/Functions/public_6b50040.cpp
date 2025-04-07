#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b50040);
CLANG_FORWARD_PROC_SYMBOL(public_6b50850);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6abe9);

#define public_6b500cd _public_6b500cd
#define public_6b500db _public_6b500db
#define public_6b500f8 _public_6b500f8
#define public_6b50101 _public_6b50101
#define public_6b50129 _public_6b50129

PROC_DECLARE(0x6b50040, internal_6b50040, public_6b50040);
extern "C" NAKED register_t __cdecl internal_6b50040()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6abe9 @0x6b50042*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6abe9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        push ebx
        push esi
        push edi
        or ecx, 0xFFFFFFFF
        xor ebx, ebx
        mov byte ptr ss : [esp+0x10], al
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_6b6b160]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, offset public_6b73f34
        mov dword ptr ss : [esp+0x30], ebx
        call public_6b50850
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ds : [public_6b73f38]
        je public_6b500cd
        add eax, 0xC
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_6b6b15c]
        add esp, 8
        test al, al
        jne public_6b500cd
        lea eax, ss:[esp+0x30]
        jmp public_6b500db
        public_6b500cd : nop
        mov ecx, dword ptr ds : [public_6b73f38]
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6b500db : nop
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_6b50101
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6b500f8
        cmp cl, 0xFF
        je public_6b500f8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6b50101
        public_6b500f8 : nop
        push eax
        call public_6b6a092
        add esp, 4
        public_6b50101 : nop
        cmp esi, dword ptr ds : [public_6b73f38]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_6b50129
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        public_6b50129 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6b50040)
    }
}

#undef public_6b500cd
#undef public_6b500db
#undef public_6b500f8
#undef public_6b50101
#undef public_6b50129
