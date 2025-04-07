#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_632f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6332140);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

#define public_632f9e6 _public_632f9e6
#define public_632fa00 _public_632fa00
#define public_632fa1e _public_632fa1e

PROC_DECLARE(0x632f9b0, internal_632f9b0, public_632f9b0);
extern "C" NAKED register_t __cdecl internal_632f9b0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov cl, byte ptr ds : [public_658e738]
        mov al, 1
        test al, cl
        push esi
        push edi
        jne public_632f9e6
        mov dl, cl
        or dl, al
        xor eax, eax
        mov ecx, 0x2F
        mov edi, offset public_658e740
/*FIXUP push offset _public_62a8920 @0x632f9d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a8920
        mov byte ptr ds : [public_658e738], dl
        rep stosd
        call public_6391f9e
        add esp, 4
        public_632f9e6 : nop
        mov esi, dword ptr ds : [ebx+0x14]
        mov edi, dword ptr ds : [esi+4]
        push 0xC4
        mov ecx, ebx
        call public_6332140
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_632fa00
        mov edi, eax
        public_632fa00 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_632fa1e
        mov ecx, 0x2F
        mov esi, offset public_658e740
        rep movsd
        public_632fa1e : nop
        inc dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        pop esi
        add eax, 8
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x632f9b0)
    }
}

#undef public_632f9e6
#undef public_632fa00
#undef public_632fa1e
