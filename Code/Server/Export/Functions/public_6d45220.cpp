#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f970);
CLANG_FORWARD_PROC_SYMBOL(public_6d45e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d499c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62e40);

#define public_6d452af _public_6d452af
#define public_6d452d0 _public_6d452d0
#define public_6d452dc _public_6d452dc
#define public_6d452de _public_6d452de
#define public_6d452f9 _public_6d452f9
#define public_6d452fe _public_6d452fe
#define public_6d45305 _public_6d45305
#define public_6d45317 _public_6d45317
#define public_6d45330 _public_6d45330
#define public_6d45341 _public_6d45341

PROC_DECLARE(0x6d45220, internal_6d45220, public_6d45220);
extern "C" NAKED register_t __cdecl internal_6d45220()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62e40 @0x6d45228*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62e40
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        xor ebx, ebx
        cmp esi, ebx
        jbe public_6d45341
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6d45341
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        cmp dword ptr ds : [eax+ecx+0x348], ebx
        je public_6d45341
        push edi
        mov edi, offset public_6d6ada8
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov dword ptr ss : [esp+0xC], edi
        cmp byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x2C], ebx
        jne public_6d452af
        mov edx, esi
        imul edx, 0x418
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[edx+ecx-0x418]
        call public_6d499c0
        public_6d452af : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC]
        push edx
        push esi
        call dword ptr ds : [eax+0x34]
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x2C], 1
        xor esi, esi
        mov edi, edi
        public_6d452d0 : nop
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0x10]
        jne public_6d452dc
        mov esi, eax
        jmp public_6d452de
        public_6d452dc : nop
        mov esi, dword ptr ds : [esi]
        public_6d452de : nop
        cmp esi, ebx
        je public_6d452fe
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebx
        je public_6d452f9
        mov ecx, edi
        call public_6d45e50
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6d452f9 : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_6d452d0
        public_6d452fe : nop
        cmp eax, ebx
        mov esi, eax
        pop edi
        je public_6d45317
        public_6d45305 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0xC]
        call public_6d0f970
        cmp esi, ebx
        jne public_6d45305
        public_6d45317 : nop
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, ebx
        mov dword ptr ss : [esp+8], offset public_6d6ada0
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], ebx
        je public_6d45341
        nop 
        public_6d45330 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp esi, ebx
        jne public_6d45330
        public_6d45341 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6d45220)
    }
}

#undef public_6d452af
#undef public_6d452d0
#undef public_6d452dc
#undef public_6d452de
#undef public_6d452f9
#undef public_6d452fe
#undef public_6d45305
#undef public_6d45317
#undef public_6d45330
#undef public_6d45341
