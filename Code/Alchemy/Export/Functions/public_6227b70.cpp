#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6227950);
CLANG_FORWARD_JUMP_SYMBOL(public_6249098);

#define public_6227bd6 _public_6227bd6
#define public_6227c06 _public_6227c06
#define public_6227c44 _public_6227c44
#define public_6227c57 _public_6227c57

PROC_DECLARE(0x6227b70, internal_6227b70, public_6227b70);
extern "C" NAKED register_t __cdecl internal_6227b70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249098 @0x6227b72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249098
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x30]
        mov ecx, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x13], al
        call dword ptr ds : [ecx+0x38]
        mov ebp, dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0xF]
        push 1
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x34], al
        call public_6222ee0
        lea eax, ss:[esp+0x2C]
        push 1
        push eax
        mov ecx, ebp
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x2C]
        xor ebx, ebx
        cmp al, bl
        mov byte ptr ss : [esp+0x10], bl
        jbe public_6227c57
        push edi
        public_6227bd6 : nop
        mov dword ptr ss : [esp+0x2C], ebx
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x18]
        and edi, 0xFF
        push edx
        push edi
        push esi
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_6227c06
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x2C], ebx
        public_6227c06 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x2C]
        push eax
        push edi
        push esi
        call dword ptr ds : [edx+0x24]
        lea ecx, ss:[esp+0x18]
        push 4
        push ecx
        mov ecx, ebp
        call public_6222ee0
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        push ebp
        call public_6227950
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 8
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_6227c44
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6227c44 : nop
        mov al, byte ptr ss : [esp+0x14]
        mov cl, byte ptr ss : [esp+0x30]
        inc al
        cmp al, cl
        mov byte ptr ss : [esp+0x14], al
        jb public_6227bd6
        pop edi
        public_6227c57 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6227b70)
    }
}

#undef public_6227bd6
#undef public_6227c06
#undef public_6227c44
#undef public_6227c57
