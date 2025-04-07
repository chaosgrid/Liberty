#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab790);
CLANG_FORWARD_PROC_SYMBOL(public_6eabf40);
CLANG_FORWARD_PROC_SYMBOL(public_6eacdf0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0870);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6eabfbf _public_6eabfbf
#define public_6eabfc3 _public_6eabfc3
#define public_6eabfeb _public_6eabfeb
#define public_6eac010 _public_6eac010
#define public_6eac030 _public_6eac030
#define public_6eac047 _public_6eac047
#define public_6eac070 _public_6eac070
#define public_6eac07e _public_6eac07e

PROC_DECLARE(0x6eabf40, internal_6eabf40, public_6eabf40);
extern "C" NAKED register_t __cdecl internal_6eabf40()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [public_6fcee80]
        test eax, eax
        push esi
        mov esi, dword ptr ds : [public_6fcee74]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+4], ecx
        je public_6eabfbf
        lea eax, ss:[esp+8]
        push eax
        mov ecx, offset public_6fcee70
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6eabfbf
        mov eax, dword ptr ds : [public_6fcee74]
        cmp esi, eax
        jne public_6eabfbf
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, offset public_6fcee70
        call public_6eb0cc0
        mov eax, dword ptr ds : [public_6fcee78]
        mov edx, dword ptr ds : [public_6fcee74]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [public_6fcee74]
        mov dword ptr ds : [public_6fcee80], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fcee74]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_6fcee70
        mov dword ptr ds : [eax+8], eax
        call public_6f1df30
        jmp public_6eabfeb
        public_6eabfbf : nop
        cmp ecx, esi
        je public_6eabfeb
        public_6eabfc3 : nop
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ss:[esp+0xC]
        call public_6eacdf0
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fcee70
        call public_6eb0870
        cmp dword ptr ss : [esp+4], esi
        jne public_6eabfc3
        public_6eabfeb : nop
        call public_6eab790
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6eac07e
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push edi
        mov edi, dword ptr ds : [public_6fb3018]
        mov edi, edi
/*FIXUP public_6eac010 : nop
        push offset public_6fb4528 @0x6eac010*/
  FIXUP public_6eac010 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4528
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6eac070
        mov ecx, esi
        call edi
        test al, al
        je public_6eac070
        lea esp, ss:[esp]
/*FIXUP public_6eac030 : nop
        push offset public_6fb445c @0x6eac030*/
  FIXUP public_6eac030 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        jne public_6eac047
        call edi
        test al, al
        jne public_6eac030
        jmp public_6eac070
        public_6eac047 : nop
        call dword ptr ds : [public_6fb3054]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [public_6fb36a8]
        add esp, 8
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_6fcee70
        call public_6f7b0f0
        public_6eac070 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6eac010
        pop edi
        pop ebx
        public_6eac07e : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6eabf40)
    }
}

#undef public_6eabfbf
#undef public_6eabfc3
#undef public_6eabfeb
#undef public_6eac010
#undef public_6eac030
#undef public_6eac047
#undef public_6eac070
#undef public_6eac07e
