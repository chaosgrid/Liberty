#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c0f0);
CLANG_FORWARD_PROC_SYMBOL(public_5afe80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9418);

#define public_43c118 _public_43c118
#define public_43c121 _public_43c121
#define public_43c123 _public_43c123
#define public_43c13f _public_43c13f
#define public_43c144 _public_43c144
#define public_43c150 _public_43c150
#define public_43c163 _public_43c163
#define public_43c16a _public_43c16a
#define public_43c16e _public_43c16e
#define public_43c184 _public_43c184
#define public_43c195 _public_43c195

PROC_DECLARE(0x43c0f0, internal_43c0f0, public_43c0f0);
extern "C" NAKED register_t __cdecl internal_43c0f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9418 @0x43c0f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9418
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        xor esi, esi
        push ebp
        public_43c118 : nop
        cmp esi, ebx
        jne public_43c121
        mov esi, dword ptr ds : [edi+4]
        jmp public_43c123
        public_43c121 : nop
        mov esi, dword ptr ds : [esi]
        public_43c123 : nop
        cmp esi, ebx
        je public_43c144
        mov ebp, dword ptr ds : [esi+8]
        cmp ebp, ebx
        je public_43c13f
        mov ecx, ebp
        call dword ptr ds : [public_5c6130]
        push ebp
        call public_5b7e1d
        add esp, 4
        public_43c13f : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_43c118
        public_43c144 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        pop ebp
        je public_43c16e
        lea esp, ss:[esp]
        public_43c150 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov ecx, esi
        mov esi, dword ptr ds : [esi]
        je public_43c163
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [edi+0x10], ecx
        jmp public_43c16a
        public_43c163 : nop
        push 1
        call public_5afe80
        public_43c16a : nop
        cmp esi, ebx
        jne public_43c150
        public_43c16e : nop
        mov esi, dword ptr ds : [edi+0x10]
        cmp esi, ebx
        mov byte ptr ds : [edi+0x14], bl
        mov dword ptr ds : [edi], offset public_5cb024
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        je public_43c195
        public_43c184 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, ebx
        jne public_43c184
        public_43c195 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x43c0f0)
    }
}

#undef public_43c118
#undef public_43c121
#undef public_43c123
#undef public_43c13f
#undef public_43c144
#undef public_43c150
#undef public_43c163
#undef public_43c16a
#undef public_43c16e
#undef public_43c184
#undef public_43c195
