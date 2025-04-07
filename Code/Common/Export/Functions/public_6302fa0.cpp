#include "Common-PCH.h"


#define public_630301c _public_630301c
#define public_630302c _public_630302c
#define public_6303095 _public_6303095

PROC_DECLARE(0x6302fa0, internal_6302fa0, public_6302fa0);
extern "C" NAKED register_t __cdecl internal_6302fa0()
{
    __asm
    {
        sub esp, 0x110
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x120]
        push edi
        push esi
        push 0
        push 0
        push 0x8005
        push 0
        call dword ptr ds : [public_6399378]
        test eax, eax
        jne public_630301c
        mov edi, dword ptr ds : [public_63992e0]
        push 0x104
        lea eax, ss:[esp+0x20]
        push esi
        push eax
        call edi
        mov ebp, dword ptr ds : [public_6399208]
        push 0
/*FIXUP push offset public_63a2690 @0x6302fe2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2690
        lea ecx, ss:[esp+0x30]
        push ecx
        push 0
        push esi
        mov byte ptr ss : [esp+0x13F], 0
        call ebp
        mov ebx, dword ptr ds : [public_639922c]
        push 0
        push esi
        call ebx
        add esp, 0x28
        test eax, eax
        je public_630302c
        push esi
        call dword ptr ds : [public_6399228]
        add esp, 4
        test eax, eax
        je public_630302c
        mov byte ptr ds : [esi], 0
        public_630301c : nop
        pop edi
        mov byte ptr ds : [esi], 0
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x110
        ret 
        public_630302c : nop
        mov eax, dword ptr ds : [public_63a2688]
        mov edx, dword ptr ds : [public_63a2684]
        mov cx, word ptr ds : [public_63a268c]
        push 0x104
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], edx
        mov dl, byte ptr ds : [public_63a268e]
        lea eax, ss:[esp+0x20]
        push esi
        push eax
        mov word ptr ss : [esp+0x24], cx
        mov byte ptr ss : [esp+0x26], dl
        call edi
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        push 0
        push esi
        mov byte ptr ss : [esp+0x13F], 0
        call ebp
        push 0
        push esi
        call ebx
        add esp, 0x28
        test eax, eax
        je public_6303095
        push esi
        call dword ptr ds : [public_6399228]
        add esp, 4
        test eax, eax
        jne public_630301c
        public_6303095 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x110
        ret 
        UNREACHABLE_TRAP(0x6302fa0)
    }
}

#undef public_630301c
#undef public_630302c
#undef public_6303095
