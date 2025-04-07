#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a840);
CLANG_FORWARD_PROC_SYMBOL(public_6f5aaf0);

#define public_6ecdcae _public_6ecdcae
#define public_6ecdcd7 _public_6ecdcd7

PROC_DECLARE(0x6ecdc80, internal_6ecdc80, public_6ecdc80);
extern "C" NAKED register_t __cdecl internal_6ecdc80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        test eax, eax
        jne public_6ecdcae
        mov eax, dword ptr ds : [ecx+0x18]
        push eax
        add ecx, 0xC
        mov eax, dword ptr ds : [ecx]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx+8], ecx
        call public_6f5aaf0
        add esp, 0x10
        mov al, 1
        ret 
        public_6ecdcae : nop
        cmp eax, 1
        jne public_6ecdcd7
        mov edx, dword ptr ds : [ecx+0x18]
        push edx
        add ecx, 0xC
        mov edx, dword ptr ds : [ecx]
        sub esp, 0xC
        mov eax, esp
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        call public_6f5a840
        add esp, 0x10
        public_6ecdcd7 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ecdc80)
    }
}

#undef public_6ecdcae
#undef public_6ecdcd7
