#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb170);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf780);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa60);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6ecf6cd _public_6ecf6cd
#define public_6ecf775 _public_6ecf775

PROC_DECLARE(0x6ecf670, internal_6ecf670, public_6ecf670);
extern "C" NAKED register_t __cdecl internal_6ecf670()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6ed5824]
        mov al, 1
        sub esp, 0xC
        test al, cl
        jne public_6ecf775
        push ebx
        push ebp
        or cl, al
        mov al, byte ptr ss : [esp+0xB]
        xor ebx, ebx
        push esi
        mov byte ptr ds : [public_6ed5824], cl
        push edi
        mov ecx, offset public_6ed5814
        mov byte ptr ds : [public_6ed5814], al
        mov dword ptr ds : [public_6ed5818], ebx
        mov dword ptr ds : [public_6ed581c], ebx
        mov dword ptr ds : [public_6ed5820], ebx
        mov byte ptr ss : [esp+0x14], bl
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6ecfa60
        mov edi, eax
        add edi, 5
        mov eax, edi
        jns public_6ecf6cd
        xor eax, eax
        public_6ecf6cd : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6ed0c5c
        mov edx, dword ptr ds : [public_6ed5818]
        add esp, 4
        mov esi, eax
        push esi
        push ebx
        push edx
        mov ecx, offset public_6ed5814
        call public_6ecfa80
        mov ebp, eax
        lea eax, ss:[esp+0x14]
        push eax
        push 5
        push ebp
        mov ecx, offset public_6ed5814
        call public_6ecfab0
        mov ecx, dword ptr ds : [public_6ed581c]
        add ebp, 0x28
        push ebp
        push ecx
        push ebx
        mov ecx, offset public_6ed5814
        call public_6ecfa80
        mov edx, dword ptr ds : [public_6ed581c]
        mov eax, dword ptr ds : [public_6ed5818]
        push edx
        push eax
        mov ecx, offset public_6ed5814
        call public_6ecb170
        mov ecx, dword ptr ds : [public_6ed5818]
        push ecx
        call public_6ed0c50
        lea edx, ds:[esi+edi*8]
        add esp, 4
        mov ecx, offset public_6ed5814
        mov dword ptr ds : [public_6ed5820], edx
        call public_6ecfa60
        lea eax, ds:[esi+eax*8+0x28]
/*FIXUP push offset _public_6ecf780 @0x6ecf759*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ecf780
        mov dword ptr ds : [public_6ed581c], eax
        mov dword ptr ds : [public_6ed5818], esi
        call public_6ed0ccb
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6ecf775 : nop
        mov eax, offset public_6ed5814
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ecf670)
    }
}

#undef public_6ecf6cd
#undef public_6ecf775
