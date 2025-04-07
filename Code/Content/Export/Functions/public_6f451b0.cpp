#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f451b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f45219 _public_6f45219
#define public_6f4522d _public_6f4522d
#define public_6f45233 _public_6f45233
#define public_6f45241 _public_6f45241
#define public_6f45282 _public_6f45282
#define public_6f4529b _public_6f4529b
#define public_6f452ae _public_6f452ae
#define public_6f452b9 _public_6f452b9
#define public_6f452bc _public_6f452bc
#define public_6f452c1 _public_6f452c1
#define public_6f452ea _public_6f452ea
#define public_6f45303 _public_6f45303
#define public_6f45316 _public_6f45316
#define public_6f45320 _public_6f45320
#define public_6f45343 _public_6f45343
#define public_6f4535b _public_6f4535b
#define public_6f4536e _public_6f4536e
#define public_6f4537b _public_6f4537b
#define public_6f4537d _public_6f4537d
#define public_6f45383 _public_6f45383
#define public_6f453ac _public_6f453ac
#define public_6f453bf _public_6f453bf
#define public_6f453ca _public_6f453ca
#define public_6f453cd _public_6f453cd
#define public_6f453cf _public_6f453cf
#define public_6f453d2 _public_6f453d2
#define public_6f453de _public_6f453de

PROC_DECLARE(0x6f451b0, internal_6f451b0, public_6f451b0);
extern "C" NAKED register_t __cdecl internal_6f451b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x1C
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x18], 0
        mov byte ptr ds : [ebx+0x19], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f36ef0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f45219
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f45219
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f45219
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f45233
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f45233
        public_6f45219 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f4522d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f45233
        public_6f4522d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f45233
        mov dword ptr ds : [eax], ebx
        public_6f45233 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f453de
        public_6f45241 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_6f453de
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f45320
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x18], 0
        jne public_6f45282
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f453d2
        public_6f45282 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f452c1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4529b
        mov dword ptr ds : [edx+4], eax
        public_6f4529b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f452ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f452bc
        public_6f452ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f452b9
        mov dword ptr ds : [edx], ecx
        jmp public_6f452bc
        public_6f452b9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f452bc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f452c1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f452ea
        mov dword ptr ds : [edi+4], ecx
        public_6f452ea : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f45303
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f453cf
        public_6f45303 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f45316
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f453cf
        public_6f45316 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f453cf
        public_6f45320 : nop
        cmp byte ptr ds : [edx+0x18], 0
        jne public_6f45343
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f453d2
        public_6f45343 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f45383
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4535b
        mov dword ptr ds : [edx+4], eax
        public_6f4535b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4536e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4537d
        public_6f4536e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f4537b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4537d
        public_6f4537b : nop
        mov dword ptr ds : [edx], ecx
        public_6f4537d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f45383 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f453ac
        mov dword ptr ds : [edi+4], ecx
        public_6f453ac : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f453bf
        mov dword ptr ds : [edi+4], edx
        jmp public_6f453cd
        public_6f453bf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f453ca
        mov dword ptr ds : [edi], edx
        jmp public_6f453cd
        public_6f453ca : nop
        mov dword ptr ds : [edi+8], edx
        public_6f453cd : nop
        mov dword ptr ds : [edx], ecx
        public_6f453cf : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f453d2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f45241
        public_6f453de : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f451b0)
    }
}

#undef public_6f45219
#undef public_6f4522d
#undef public_6f45233
#undef public_6f45241
#undef public_6f45282
#undef public_6f4529b
#undef public_6f452ae
#undef public_6f452b9
#undef public_6f452bc
#undef public_6f452c1
#undef public_6f452ea
#undef public_6f45303
#undef public_6f45316
#undef public_6f45320
#undef public_6f45343
#undef public_6f4535b
#undef public_6f4536e
#undef public_6f4537b
#undef public_6f4537d
#undef public_6f45383
#undef public_6f453ac
#undef public_6f453bf
#undef public_6f453ca
#undef public_6f453cd
#undef public_6f453cf
#undef public_6f453d2
#undef public_6f453de
