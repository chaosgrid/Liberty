#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb10d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb1139 _public_6eb1139
#define public_6eb114d _public_6eb114d
#define public_6eb1153 _public_6eb1153
#define public_6eb1161 _public_6eb1161
#define public_6eb11a2 _public_6eb11a2
#define public_6eb11bb _public_6eb11bb
#define public_6eb11ce _public_6eb11ce
#define public_6eb11d9 _public_6eb11d9
#define public_6eb11dc _public_6eb11dc
#define public_6eb11e1 _public_6eb11e1
#define public_6eb120a _public_6eb120a
#define public_6eb1223 _public_6eb1223
#define public_6eb1236 _public_6eb1236
#define public_6eb1240 _public_6eb1240
#define public_6eb1263 _public_6eb1263
#define public_6eb127b _public_6eb127b
#define public_6eb128e _public_6eb128e
#define public_6eb129b _public_6eb129b
#define public_6eb129d _public_6eb129d
#define public_6eb12a3 _public_6eb12a3
#define public_6eb12cc _public_6eb12cc
#define public_6eb12df _public_6eb12df
#define public_6eb12ea _public_6eb12ea
#define public_6eb12ed _public_6eb12ed
#define public_6eb12ef _public_6eb12ef
#define public_6eb12f2 _public_6eb12f2
#define public_6eb12fe _public_6eb12fe

PROC_DECLARE(0x6eb10d0, internal_6eb10d0, public_6eb10d0);
extern "C" NAKED register_t __cdecl internal_6eb10d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x38
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x34], 0
        mov byte ptr ds : [ebx+0x35], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6eb1f30
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6eb1139
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6eb1139
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6eb1139
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6eb1153
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eb1153
        public_6eb1139 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6eb114d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6eb1153
        public_6eb114d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6eb1153
        mov dword ptr ds : [eax], ebx
        public_6eb1153 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6eb12fe
        public_6eb1161 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6eb12fe
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6eb1240
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x34], 0
        jne public_6eb11a2
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6eb12f2
        public_6eb11a2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6eb11e1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eb11bb
        mov dword ptr ds : [edx+4], eax
        public_6eb11bb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eb11ce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb11dc
        public_6eb11ce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6eb11d9
        mov dword ptr ds : [edx], ecx
        jmp public_6eb11dc
        public_6eb11d9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eb11dc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eb11e1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6eb120a
        mov dword ptr ds : [edi+4], ecx
        public_6eb120a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eb1223
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb12ef
        public_6eb1223 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eb1236
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb12ef
        public_6eb1236 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb12ef
        public_6eb1240 : nop
        cmp byte ptr ds : [edx+0x34], 0
        jne public_6eb1263
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6eb12f2
        public_6eb1263 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6eb12a3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eb127b
        mov dword ptr ds : [edx+4], eax
        public_6eb127b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eb128e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb129d
        public_6eb128e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6eb129b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb129d
        public_6eb129b : nop
        mov dword ptr ds : [edx], ecx
        public_6eb129d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eb12a3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6eb12cc
        mov dword ptr ds : [edi+4], ecx
        public_6eb12cc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eb12df
        mov dword ptr ds : [edi+4], edx
        jmp public_6eb12ed
        public_6eb12df : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6eb12ea
        mov dword ptr ds : [edi], edx
        jmp public_6eb12ed
        public_6eb12ea : nop
        mov dword ptr ds : [edi+8], edx
        public_6eb12ed : nop
        mov dword ptr ds : [edx], ecx
        public_6eb12ef : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eb12f2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eb1161
        public_6eb12fe : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6eb10d0)
    }
}

#undef public_6eb1139
#undef public_6eb114d
#undef public_6eb1153
#undef public_6eb1161
#undef public_6eb11a2
#undef public_6eb11bb
#undef public_6eb11ce
#undef public_6eb11d9
#undef public_6eb11dc
#undef public_6eb11e1
#undef public_6eb120a
#undef public_6eb1223
#undef public_6eb1236
#undef public_6eb1240
#undef public_6eb1263
#undef public_6eb127b
#undef public_6eb128e
#undef public_6eb129b
#undef public_6eb129d
#undef public_6eb12a3
#undef public_6eb12cc
#undef public_6eb12df
#undef public_6eb12ea
#undef public_6eb12ed
#undef public_6eb12ef
#undef public_6eb12f2
#undef public_6eb12fe
