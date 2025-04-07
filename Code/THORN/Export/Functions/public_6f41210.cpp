#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41210);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59064);

#define public_6f41250 _public_6f41250
#define public_6f4126b _public_6f4126b
#define public_6f41277 _public_6f41277
#define public_6f412a4 _public_6f412a4

PROC_DECLARE(0x6f41210, internal_6f41210, public_6f41210);
extern "C" NAKED register_t __cdecl internal_6f41210()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59064 @0x6f41212*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59064
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi+0xE8]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x1C], 2
        je public_6f41250
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xE8], ebp
        public_6f41250 : nop
        mov eax, dword ptr ds : [esi+0xE4]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x1C], 1
        je public_6f4126b
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xE4], ebp
        public_6f4126b : nop
        mov ebx, dword ptr ds : [esi+0x88]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6f412a4
        public_6f41277 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6f57e26
        mov ecx, dword ptr ds : [esi+0x8C]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x8C], ecx
        jne public_6f41277
        public_6f412a4 : nop
        mov eax, dword ptr ds : [esi+0x88]
        push eax
        call public_6f57e26
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x88], ebp
        mov dword ptr ds : [esi+0x8C], ebp
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6f405e0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f41210)
    }
}

#undef public_6f41250
#undef public_6f4126b
#undef public_6f41277
#undef public_6f412a4
