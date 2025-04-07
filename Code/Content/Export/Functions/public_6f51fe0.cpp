#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6f51fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f52003 _public_6f52003
#define public_6f5200e _public_6f5200e
#define public_6f52010 _public_6f52010
#define public_6f52031 _public_6f52031
#define public_6f52045 _public_6f52045
#define public_6f52054 _public_6f52054
#define public_6f52070 _public_6f52070
#define public_6f520b9 _public_6f520b9

PROC_DECLARE(0x6f51fe0, internal_6f51fe0, public_6f51fe0);
extern "C" NAKED register_t __cdecl internal_6f51fe0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        sub esp, 8
        test al, al
        push esi
        push edi
        mov edi, ecx
        je public_6f52054
        mov eax, dword ptr ds : [edi+0xA8]
        mov ecx, dword ptr ds : [edi+0xAC]
        cmp eax, ecx
        je public_6f5200e
        mov edx, dword ptr ss : [esp+0x14]
        public_6f52003 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f52010
        add eax, 8
        cmp eax, ecx
        jne public_6f52003
        public_6f5200e : nop
        mov eax, ecx
        public_6f52010 : nop
        cmp eax, ecx
        je public_6f520b9
        dec dword ptr ds : [eax+4]
        jne public_6f520b9
        mov edx, dword ptr ds : [edi+0xAC]
        add eax, 8
        cmp eax, edx
        je public_6f52045
        lea ecx, ds:[eax-8]
        public_6f52031 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6f52031
        public_6f52045 : nop
        add dword ptr ds : [edi+0xAC], 0xFFFFFFF8
        pop edi
        pop esi
        add esp, 8
        ret 8
        public_6f52054 : nop
        mov esi, dword ptr ds : [edi+0xE4]
        push ebx
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f52070
        mov ebx, eax
        public_6f52070 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x18]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb6740
        inc dword ptr ds : [edi+0xE8]
        mov eax, dword ptr ds : [public_6fd0cd0]
        mov edx, dword ptr ds : [public_6fbb790]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_6fd1c74 @0x6f520a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x24], ecx
        call dword ptr ds : [public_6fb342c]
        add esp, 0x14
        pop ebx
        public_6f520b9 : nop
        pop edi
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f51fe0)
    }
}

#undef public_6f52003
#undef public_6f5200e
#undef public_6f52010
#undef public_6f52031
#undef public_6f52045
#undef public_6f52054
#undef public_6f52070
#undef public_6f520b9
