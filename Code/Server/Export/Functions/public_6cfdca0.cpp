#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdca0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cfdd09 _public_6cfdd09
#define public_6cfdd1d _public_6cfdd1d
#define public_6cfdd23 _public_6cfdd23
#define public_6cfdd31 _public_6cfdd31
#define public_6cfdd72 _public_6cfdd72
#define public_6cfdd8b _public_6cfdd8b
#define public_6cfdd9e _public_6cfdd9e
#define public_6cfdda9 _public_6cfdda9
#define public_6cfddac _public_6cfddac
#define public_6cfddb1 _public_6cfddb1
#define public_6cfddda _public_6cfddda
#define public_6cfddf3 _public_6cfddf3
#define public_6cfde06 _public_6cfde06
#define public_6cfde10 _public_6cfde10
#define public_6cfde33 _public_6cfde33
#define public_6cfde4b _public_6cfde4b
#define public_6cfde5e _public_6cfde5e
#define public_6cfde6b _public_6cfde6b
#define public_6cfde6d _public_6cfde6d
#define public_6cfde73 _public_6cfde73
#define public_6cfde9c _public_6cfde9c
#define public_6cfdeaf _public_6cfdeaf
#define public_6cfdeba _public_6cfdeba
#define public_6cfdebd _public_6cfdebd
#define public_6cfdebf _public_6cfdebf
#define public_6cfdec2 _public_6cfdec2
#define public_6cfdece _public_6cfdece

PROC_DECLARE(0x6cfdca0, internal_6cfdca0, public_6cfdca0);
extern "C" NAKED register_t __cdecl internal_6cfdca0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6d60012
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6d5c880
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6cfdd09
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6cfdd09
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6cfdd09
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6cfdd23
        mov dword ptr ds : [eax+8], ebx
        jmp public_6cfdd23
        public_6cfdd09 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6cfdd1d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6cfdd23
        public_6cfdd1d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6cfdd23
        mov dword ptr ds : [eax], ebx
        public_6cfdd23 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6cfdece
        public_6cfdd31 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6cfdece
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6cfde10
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6cfdd72
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6cfdec2
        public_6cfdd72 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6cfddb1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6cfdd8b
        mov dword ptr ds : [edx+4], eax
        public_6cfdd8b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6cfdd9e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6cfddac
        public_6cfdd9e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6cfdda9
        mov dword ptr ds : [edx], ecx
        jmp public_6cfddac
        public_6cfdda9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6cfddac : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6cfddb1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6cfddda
        mov dword ptr ds : [edi+4], ecx
        public_6cfddda : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6cfddf3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cfdebf
        public_6cfddf3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6cfde06
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cfdebf
        public_6cfde06 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cfdebf
        public_6cfde10 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6cfde33
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6cfdec2
        public_6cfde33 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6cfde73
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6cfde4b
        mov dword ptr ds : [edx+4], eax
        public_6cfde4b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6cfde5e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6cfde6d
        public_6cfde5e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6cfde6b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cfde6d
        public_6cfde6b : nop
        mov dword ptr ds : [edx], ecx
        public_6cfde6d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6cfde73 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6cfde9c
        mov dword ptr ds : [edi+4], ecx
        public_6cfde9c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6cfdeaf
        mov dword ptr ds : [edi+4], edx
        jmp public_6cfdebd
        public_6cfdeaf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6cfdeba
        mov dword ptr ds : [edi], edx
        jmp public_6cfdebd
        public_6cfdeba : nop
        mov dword ptr ds : [edi+8], edx
        public_6cfdebd : nop
        mov dword ptr ds : [edx], ecx
        public_6cfdebf : nop
        mov dword ptr ds : [ecx+4], edx
        public_6cfdec2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6cfdd31
        public_6cfdece : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6cfdca0)
    }
}

#undef public_6cfdd09
#undef public_6cfdd1d
#undef public_6cfdd23
#undef public_6cfdd31
#undef public_6cfdd72
#undef public_6cfdd8b
#undef public_6cfdd9e
#undef public_6cfdda9
#undef public_6cfddac
#undef public_6cfddb1
#undef public_6cfddda
#undef public_6cfddf3
#undef public_6cfde06
#undef public_6cfde10
#undef public_6cfde33
#undef public_6cfde4b
#undef public_6cfde5e
#undef public_6cfde6b
#undef public_6cfde6d
#undef public_6cfde73
#undef public_6cfde9c
#undef public_6cfdeaf
#undef public_6cfdeba
#undef public_6cfdebd
#undef public_6cfdebf
#undef public_6cfdec2
#undef public_6cfdece
